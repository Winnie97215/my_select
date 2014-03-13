/*
** xwrite.c for xwrite in /u/all/catuss_a/cu/rendu/c/minishell1/lib
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Thu Jun 17 03:15:20 2010 axel catusse
** Last update Thu Jun 17 03:22:30 2010 axel catusse
*/
#include <stdlib.h>
#include <unistd.h>
#include "libmy.h"

int			xwrite(int std, char *str, size_t len)
{
  int			i;

  i = 0;
  if ((i = write(std, str, len)) == -1)
    {
      my_printf_err("error: write(): An error has occured.\n");
      return (-1);
    }
  return (i);
}
