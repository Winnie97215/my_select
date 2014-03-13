/*
** fill_args_list.c for select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Tue Jul  6 15:28:02 2010 axel catusse
** Last update Tue Jul  6 23:52:42 2010 axel catusse
*/

#include <stdlib.h>
#include "libmy.h"
#include "my_select.h"

static t_args		*creat_new_elem_args(char *av)
{
  t_args		*new;

  new = NULL;
  new = xmalloc(sizeof(*new));
  new->arg = av;
  new->select = OFF;
  return (new);
}

static void		set_ptr_args(t_args **head, t_args **new, t_args **tmp)
{
  if (*head)
    {
      (*tmp)->next = *new;
      (*new)->prev = *tmp;
      *tmp = *new;
    }
  else
    {
      *head = *new;
      *tmp = *new;
      (*head)->next = NULL;
      (*head)->prev = NULL;
    }
}

void			fill_args_list(t_select *select)
{
  t_args		*head;
  t_args		*new;
  t_args		*tmp;
  int			i;

  i = 0;
  head = NULL;
  tmp = NULL;
  new = NULL;
  while (++i < select->ac)
    {
      new = creat_new_elem_args(select->av[i]);
      set_ptr_args(&head, &new, &tmp);
    }
  new->next = NULL;
  select->args = head;
  select->last_arg = new;
  select->pos = head;
}
