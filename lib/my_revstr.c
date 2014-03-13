/*
** my_revstr.c for  in /u/all/catuss_a/rendu/lib/my
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Wed Mar 24 16:10:53 2010 axel catusse
** Last update Sun Mar 28 18:13:48 2010 axel catusse
*/

char    *my_revstr(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = my_strlen(str) - 1;
  while (j > i)
    {
      my_swap(&str[i], &str[j]);
      i++;
      j--;
    }
  return (str);
}
