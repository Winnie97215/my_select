/*
** my_select.c for my_select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Tue Jul  6 03:34:39 2010 axel catusse
** Last update Thu Jul  8 23:22:09 2010 axel catusse
*/

#include <stdlib.h>
#include <term.h>
#include <curses.h>
#include "libmy.h"
#include "my_select.h"

static int		check_last_choice(t_args *head)
{
  t_args		*tmp;

  tmp = NULL;
  if (head->next)
    tmp = head->next;
  while (tmp)
    {
      if (tmp->select == ON)
	return (1);
      tmp = tmp->next;
    }
  return (0);
}

static void		return_choices(t_select *select)
{
  t_args		*tmp;

  tmp = select->args;
  xtputs(select->termcap->clstr, 1, my_outc);
  while (tmp)
    {
      if (tmp->select == ON)
	{
	  xwrite(1, tmp->arg, my_strlen(tmp->arg));
	  if (check_last_choice(tmp))
	    xwrite(1, " ", 1);
	}
      tmp = tmp->next;
    }
}

void			my_select(t_select *select)
{
  term_cfg();
  xtputs(select->termcap->clstr, 1, my_outc);
  xtputs(select->termcap->vistr, 1, my_outc);
  my_signal(select);
  display_args(select);
  while (handles_keys(select))
    {
      xtputs(select->termcap->clstr, 1, my_outc);
      get_size(select->termcap);
      display_args(select);
    }
  xtputs(select->termcap->vestr, 1, my_outc);
  return_choices(select);
}
