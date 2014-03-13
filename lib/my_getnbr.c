/*
** my_getnbr.c for  in /u/all/catuss_a/rendu/piscine/Jour04
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Tue Mar 23 15:24:09 2010 axel catusse
** Last update Tue Mar 30 16:26:11 2010 axel catusse
*/

int     my_getnbr(char *str)
{
  int	a;
  char	*tmp;
  int	nb_int;

  tmp = str;
  a = 1;
  nb_int = 0;
  while (*str != '\0')
    {
      a = a * 10; 
      str++;
    }
  a = a / 10;
  str = tmp;
  while (*str != '\0')
    {
      nb_int = nb_int + (*str - '0') * a;
      a = a / 10;
      str++;
    }
  return (nb_int);
}
