/*
** key_pressed.c for select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Tue Jul  6 23:57:14 2010 axel catusse
** Last update Tue Sep 28 17:50:28 2010 axel catusse
*/

#include <term.h>
#include <stdlib.h>
#include "libmy.h"
#include "my_select.h"

void			arrow_pressed(t_select *select, char *buffer)
{
  if (!my_strcmp(buffer, select->termcap->klstr))
    {
      if (select->pos->next)
	select->pos = select->pos->next;
      else
	select->pos = select->args;
    }
  else if (!my_strcmp(buffer, select->termcap->krstr))
    {
      if (select->pos->prev)
	select->pos = select->pos->prev;
      else
	select->pos = select->last_arg;
    }
}

void			space_pressed(t_select *select, char *buffer)
{
  if (buffer[0] == ' ' && select->pos->select == OFF)
    {
      select->pos->select = ON;
      if (select->pos->next)
	select->pos = select->pos->next;
      else
	select->pos = select->args;
    }
  else if (buffer[0] == ' ' && select->pos->select == ON)
    {
      select->pos->select = OFF;
      if (select->pos->next)
	select->pos = select->pos->next;
      else
	select->pos = select->args;
    }
}

int			enter_pressed(char *buffer)
{
  free(buffer);
  if (buffer[0] == '\n')
    return (0);
  return (1);
}

int			escape_pressed(t_select *select, char *buffer)
{
  if (buffer[0] == 27 && buffer [1] == 0 && remove_choices(select))
    {
      xtputs(select->termcap->vestr, 1, my_outc);
      free(buffer);
      free_my_select(select);
      exit(EXIT_SUCCESS);
    }
  return (1);
}

void			del_bs_pressed(t_select *select, char *buffer)
{
  if (select->pos->next == NULL && select->pos->prev == NULL)
    {
      xtputs(select->termcap->vestr, 1, my_outc);
      free(buffer);
      free_my_select(select);
      exit(EXIT_FAILURE);
    }
  check_delbs_touch(select, buffer);
}
