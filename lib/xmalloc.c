/*
** xmalloc.c for xmalloc in /u/all/catuss_a/cu/rendu/c/minishell1/lib
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Mon Jun  7 02:04:29 2010 axel catusse
** Last update Sun Jun 20 19:11:39 2010 axel catusse
*/
#include <stdlib.h>
#include <time.h>
#include "libmy.h"

void		*xmalloc(size_t size)
{
  void *ptr;

  if (!size)
    my_putstr_err("error: malloc: zero size\n");
  if (!(ptr = malloc(size)))
    my_putstr_err("error: malloc: out of memory\n");
  return (ptr);
}
