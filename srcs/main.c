/*
** main.c for select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Tue Jul  6 00:09:21 2010 axel catusse
** Last update Tue Jul  6 17:58:05 2010 axel catusse
*/

#include <stdlib.h>
#include "libmy.h"
#include "my_select.h"

int			 main(int ac, char **av)
{
  t_select		*select;

  if (ac > 1)
    {
      init_select(&select, ac, av);
      fill_args_list(select);
      my_select(select);
    }
  else
    my_putstr_err("USAGE: my_select [ARGS]\n");
  return (0);
}
