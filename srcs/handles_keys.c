/*
** handles_keys.c for my_select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Tue Jul  6 17:32:34 2010 axel catusse
** Last update Fri Nov  5 04:16:03 2010 axel catusse
*/

#include <stdlib.h>
#include <unistd.h>
#include "libmy.h"
#include "my_select.h"

int			remove_choices(t_select *select)
{
  t_args		*tmp;

  tmp = select->args;
  while (tmp)
    {
      tmp->select = OFF;
      tmp = tmp->next;
    }
  return (1);
}


int			handles_keys(t_select *select)
{
  char			*buffer;

  buffer = xmalloc(sizeof(*buffer) * 5);
  my_bzero(buffer, 5);
  read(0, buffer, 5);
  if (!strcmp("\033^L", buffer))
    exit(0);
  arrow_pressed(select, buffer);
  space_pressed(select, buffer);
  del_bs_pressed(select, buffer);
  if (!escape_pressed(select, buffer))
    return (0);
  if (!enter_pressed(buffer))
    return (0);
  return (1);
}
