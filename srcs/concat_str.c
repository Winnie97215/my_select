/*
** concat_str.c for select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Thu Jul  8 18:21:13 2010 axel catusse
** Last update Thu Jul  8 19:05:30 2010 axel catusse
*/

#include <stdlib.h>
#include "libmy.h"

char			*concat_str(char *s1, char *s2)
{
  char		 	*s3;
  int			i;
  int			j;

  i = 0;
  j = 0;
  s3 = xmalloc(sizeof(*s3) * (my_strlen(s1) + my_strlen(s2) + 1));
  while (s1 && *s1)
    {
      s3[i] = *s1;
      i++;
      s1++;
    }
  j = 0;
  while (s2 && *s2)
    {
      s3[i] = *s2;
      i++;
      s2++;
    }
  s3[i] = '\0';
  return (s3);
}
