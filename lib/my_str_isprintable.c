/*
** my_str_isprintable.c for my_str_isprintable in /u/all/catuss_a/rendu/lib/my
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Wed Mar 24 22:53:25 2010 axel catusse
** Last update Wed Mar 24 23:23:05 2010 axel catusse
*/

int     my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < ' '  || str[i] > '~')
	return (0);
      i++;
    }
  return (1);
}
