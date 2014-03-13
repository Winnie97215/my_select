/*
** my_strcmp.c for my_strcmp in /u/all/catuss_a/rendu/piscine/Jour06
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Wed Mar 24 18:24:06 2010 axel catusse
** Last update Thu Jun  3 22:22:49 2010 axel catusse
*/

int			my_strcmp(char *s1, char *s2)
{
  int			i;

  i = 0;
  while (s1[i] == s2[i] && s2[i] && s1[i])
    i++;
  return (s1[i] - s2[i]);
}
