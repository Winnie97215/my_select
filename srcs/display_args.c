/*
** display_args.c for select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Tue Jul  6 16:28:31 2010 axel catusse
** Last update Wed Sep 29 21:03:47 2010 axel catusse
*/

#include <stdlib.h>
#include <term.h>
#include <curses.h>
#include "libmy.h"
#include "my_select.h"

static void		reverse_video(t_select *select, t_args *tmp)
{
  if (tmp == select->pos)
    {
      my_putstr("\033[31m");
      xtputs(select->termcap->usstr, 1, my_outc);
      my_putstr(tmp->arg);
      my_putstr("\033[37m");
      xtputs(select->termcap->uestr, 1, my_outc);
    }
  else if (tmp->select == ON)
    {
      xtputs(select->termcap->sostr, 1, my_outc);
      my_putstr(tmp->arg);
      xtputs(select->termcap->sestr, 1, my_outc);
    }
  else
    my_putstr(tmp->arg);
}

static int		bad_window_size(t_select *select, int len, int x)
{
  if (select->termcap->col < 107 || x + len > select->termcap->col)
    {
      xtputs(select->termcap->clstr, 1, my_outc);
      my_putstr("Bad window size.\n");
      return 1;
    }
  return (0);
}

static void		check_lign(t_select *select, int *y, int *x, int *len)
{
  *y += 1;
  if (*y >= select->termcap->li)
    {
      *x += *len + 2;
      *len = 0;
      *y = 20;
    }
}

void			display_args(t_select *select)
{
  int			x;
  int			y;
  t_args		*tmp;
  int			len;

  x = 0;
  y = 20;
  tmp = select->args;
  len = 0;
  display_menu();
  while (tmp)
    {
      if (len < my_strlen(tmp->arg))
	len = my_strlen(tmp->arg);
      if (bad_window_size(select, len, x))
	return ;
      xtputs(tgoto(select->termcap->cmstr, x, y), 1, my_outc);
      reverse_video(select, tmp);
      check_lign(select, &y, &x, &len);
      tmp = tmp->next;
    }
}
