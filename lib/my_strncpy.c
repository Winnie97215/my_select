/*
** my_strncpy.c for my_strncpy in /u/all/catuss_a/cu/rendu/lib/my
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Sun Mar 28 17:46:48 2010 axel catusse
** Last update Thu Jun 17 02:05:05 2010 axel catusse
*/

char			*my_strncpy(char *dest, char *src, int n)
{
  int			i;

  i = 0;
  while (dest && src && i < n)
    {
      dest[i] = src[i];
      i++;
    }
  if (dest)
    dest[i] = '\0';
  return (dest);
}
