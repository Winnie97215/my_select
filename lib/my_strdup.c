/*
** my_strdup.c for libmy in /u/all/catuss_a/cu/rendu/c/minishell1
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Fri Jun  4 03:07:01 2010 axel catusse
** Last update Thu Jun 17 03:39:17 2010 axel catusse
*/
#include <stdlib.h>
#include "libmy.h"

char			*my_strdup(char *str)
{
  char			*dest;
  int			i;

  i = 0;
  dest = xmalloc((my_strlen(str) + 1) * sizeof(*dest));
  while (dest && str && str[i])
    {
      dest[i] = str[i];
      i += 1;
    }
  if (dest)
    dest[i] = '\0';
  return (dest);
}
