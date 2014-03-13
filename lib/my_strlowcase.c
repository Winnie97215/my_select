/*
** my_strlowcase.c for my_strlowcase  in /u/all/catuss_a/rendu/lib/my
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Wed Mar 24 20:49:36 2010 axel catusse
** Last update Wed Mar 24 20:54:10 2010 axel catusse
*/

char    *my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	  str[i] = str[i] - ('A' - 'a');
      i = i + 1;
    }
  return (str);
}
