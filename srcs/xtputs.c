/*
** xtputs.c for select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Thu Jul  8 23:19:03 2010 axel catusse
** Last update Thu Jul  8 23:22:29 2010 axel catusse
*/

#include <curses.h>
#include <term.h>
#include <stdlib.h>
#include "my_select.h"
#include "libmy.h"

void			xtputs(char *str, int i, int (*f)(int))
{
  if (tputs(str, i ,f) == ERR)
    {
      my_putstr("error: tputs\n.");
      exit(EXIT_FAILURE);
    }
}
