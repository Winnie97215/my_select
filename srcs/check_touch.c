/*
** check_touch.c for select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Thu Jul  8 21:49:55 2010 axel catusse
** Last update Thu Jul  8 22:08:36 2010 axel catusse
*/

#include <unistd.h>
#include <stdlib.h>
#include "libmy.h"
#include "my_select.h"

void			check_delbs_touch(t_select *select, char *buffer)
{
  t_args		*tmp_p;
  t_args		*tmp_n;

  if (!my_strcmp(buffer, select->termcap->kDstr)
      || !my_strcmp(buffer, select->termcap->kbstr))
    {
      tmp_p = select->pos->prev;
      tmp_n = select->pos->next;
      if (tmp_p)
	tmp_p->next = tmp_n;
      if (tmp_n)
	tmp_n->prev = tmp_p;
      free(select->pos);
      if (tmp_p == NULL)
	{
	  select->pos = tmp_n;
	  select->args = tmp_n;
	}
      else
	{
	  select->pos = tmp_p;
	  select->last_arg = tmp_p;
	}
    }
}
