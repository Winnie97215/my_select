/*
** my_strupcase.c for  my_strupcase in /u/all/catuss_a/rendu/lib/my
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Wed Mar 24 20:26:04 2010 axel catusse
** Last update Wed Mar 24 20:48:33 2010 axel catusse
*/
#include <stdlib.h>

char    *my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	  str[i] = str[i] + ('A' - 'a');
      i = i +1;
    }
  return (str);
}
