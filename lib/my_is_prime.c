/*
** my_is_prime.c for my_is_prime in /u/all/catuss_a/cu/rendu/lib/my
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Sun Mar 28 16:57:43 2010 axel catusse
** Last update Sun Mar 28 17:31:41 2010 axel catusse
*/

int	my_is_prime(int nb)
{
  int	i;
  int	result;
  
  i = 2;
  result = 1;
  if (nb < 0)
    nb = nb * -1;
  if (nb == 0 || nb == 1)
    result = 0;
  while (i <= (nb / 2) && (nb != 0 || nb != 1))
    {
      if (nb % i == 0)
	{
	  result = 0;
	  break ;
	}
      i++;
    }
  return (result);
}
