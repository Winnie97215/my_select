/*
** my_bzero.c for bzero in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Tue Jul  6 16:24:22 2010 axel catusse
** Last update Tue Jul  6 16:26:36 2010 axel catusse
*/

void			my_bzero(char *str, int c)
{
  int			i;

  i = -1;
  while (++i < c)
    str[i] = 0;
}
