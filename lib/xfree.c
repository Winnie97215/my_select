/*
** xfree.c for xfree in /u/all/catuss_a/cu/rendu/c/minishell1/lib
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Thu Jun 17 03:29:37 2010 axel catusse
** Last update Wed Jul  7 00:08:18 2010 axel catusse
*/
#include <stdlib.h>
#include "libmy.h"

void			xfree(void *ptr)
{
  if (ptr)
    free(ptr);
  else
    my_printf_err("error: free: An error has occured.\n");
}
