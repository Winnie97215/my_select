/*
** xtgetstr.c for my_select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Tue Jul  6 03:06:47 2010 axel catusse
** Last update Thu Jul  8 19:58:17 2010 axel catusse
*/

#include <term.h>
#include <stdlib.h>
#include <stdio.h>
#include "libmy.h"

char			*xtgetstr(char *cap, char **area)
{
  char			*str;

  if ((str = tgetstr(cap, area)) == NULL)
    {
      perror("tgetstr ");
/*       my_printf_err("error: xtgetstr: Failed to get %e.\n", cap); */
      exit(EXIT_FAILURE);
    }
  return (str);
}
