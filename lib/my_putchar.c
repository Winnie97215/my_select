/*
** my_putchar.c for my_putchar in /u/all/catuss_a/cu/rendu/lib/my
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Sun Mar 28 15:03:54 2010 axel catusse
** Last update Tue Jul  6 18:29:16 2010 axel catusse
*/
#include <stdlib.h>
#include <unistd.h>
#include "libmy.h"

void		my_putchar(char c)
{
  xwrite(0, &c, 1);
}
