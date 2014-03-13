/*
** free_my_select.c for select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Wed Jul  7 00:11:14 2010 axel catusse
** Last update Wed Jul  7 00:23:17 2010 axel catusse
*/

#include <stdlib.h>
#include "libmy.h"
#include "my_select.h"

void			free_my_select(t_select *select)
{
  t_args		*tmp;

  free(select->termcap);
  while (select->args)
    {
      tmp = select->args->next;
      free(select->args);
      select->args = tmp;
    }
  free(select);
}
