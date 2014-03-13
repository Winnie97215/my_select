/*
** ptrfunc.c for function1 in /u/all/catuss_a/cu/rendu/c/my_printf
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Wed Apr 21 15:15:55 2010 axel catusse
** Last update Sun May 30 18:17:23 2010 axel catusse
*/

#include <stdarg.h>
#include "my_printf.h"
#include <stdlib.h>

void		fun_o(va_list *args)
{
  int		a;

  a = va_arg(*args, int);
  if (a == 0)
    my_put_nbr(0);
  else
    my_putnbr_base(a, "01234567");
}

void		fun_p(va_list *args)
{
  my_printf("0x");
  my_putnbr_base(va_arg(*args, unsigned int), "0123456789abcdef");
}

void		fun_b(va_list *args)
{
  unsigned int 	a;

  a = va_arg(*args, unsigned int);
  if (a == 0)
    my_put_nbr(0);
  else
    my_putnbr_base_unsigned(a, "01");
}

void		fun_mod()
{
  my_putchar('%');
}

void		fun_u(va_list *args)
{
  unsigned int	a;

  a = va_arg(*args, unsigned int);
  my_put_nbr(a);
}
