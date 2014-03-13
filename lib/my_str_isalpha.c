/*
** my_str_isalpha.c for my_str_isalpha  in /u/all/catuss_a/rendu/lib/my
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Wed Mar 24 21:39:38 2010 axel catusse
** Last update Wed Mar 24 21:53:17 2010 axel catusse
*/

int     my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (is_alpha(str[i]) == 0)
	return (0);
      i = i + 1;
    }
  return (1);
}
