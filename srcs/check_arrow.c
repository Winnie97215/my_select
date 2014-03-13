/*
** check_arrow.c for select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Wed Jul  7 00:00:19 2010 axel catusse
** Last update Wed Jul  7 00:01:12 2010 axel catusse
*/

#include <stdlib.h>
#include "libmy.h"

char			*check_arrow(char *str)
{
  char			*arrow;

  arrow = str;
  if (my_strlen(str) >= 3 && str[0] == 27)
    {
      if (str[1] == '[')
	{
	  if (str[2] == 'A')
	    arrow = my_strdup("ku");
	  else if (str[2] == 'B')
	    arrow = my_strdup("kd");
	  else if (str[2] == 'C')
	    arrow = my_strdup("kl");
	  else if (str[2] == 'D')
	    arrow = my_strdup("kr");
	}
      return (arrow);
    }
  return (str);
}
