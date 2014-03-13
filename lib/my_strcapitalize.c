/*
** my_strcapitalize.c for my_strcapitalize  in /u/all/catuss_a/rendu/lib/my
**
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Wed Mar 24 20:54:47 2010 axel catusse
** Last update Wed Mar 24 21:38:44 2010 axel catusse
*/

char    *my_strcapitalize(char *str)
{
  int	i;

  i = 1;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	{
	  if (str[i - 1] != ' ')
	    str[i] = str[i] - ('A' - 'a');
	}
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  if (str[i - 1] == ' ')
	    str[i] = str[i] + ('A' - 'a');
	}
      i = i + 1;
    }
  if (str[0] >= 'a' && str[0] <= 'z')
    str[0] = str[0] + ('A' - 'a');
  return (str);
}
