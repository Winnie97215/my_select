/*
** my_putstr_err.c for putstrerr in /u/all/catuss_a/cu/rendu/c/minishell1/lib
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Mon Jun  7 01:52:29 2010 axel catusse
** Last update Thu Jun 17 03:25:52 2010 axel catusse
*/
#include <unistd.h>
#include "libmy.h"

void		my_putstr_err(char *str)
{
  while (str && *str)
    {
      xwrite(2, str, 1);
      str += 1;
    }
}
