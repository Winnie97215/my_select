/*
** my_strstr.c for my_strstr in /u/all/catuss_a/rendu/lib/my
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Wed Mar 24 17:07:10 2010 axel catusse
** Last update Wed Mar 24 19:08:21 2010 axel catusse
*/

char    *my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  j = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[j])
	{
	  while (str[i] == to_find[j] && to_find[j] != '\0')
	    {
	      i = i + 1;
	      j = j + 1;
	    }
	  if (j == strlen(to_find))
	    {
	      str = str + i - j;
	      return (str);
	    }
	  else
	    {
	      j = 0;
	      i = i - j;
	    }
	}
      i = i + 1;
    }
  return (str);
}
