/*
** init_fct.c for select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Tue Jul  6 16:03:50 2010 axel catusse
** Last update Tue Sep 28 19:21:20 2010 axel catusse
*/

#include <stdlib.h>
#include <termcap.h>
#include <sys/ioctl.h>
#include "libmy.h"
#include "my_select.h"

void			get_capa(t_term *termcap, char *term)
{
  char			bp[1024];
  char			area[2048];

  if (tgetent(bp, term) != 1)
    {
      if ((term = getenv("TERM")) == NULL)
	{
	  my_putstr_err("can't determine terminal\n");
	  exit(EXIT_FAILURE);
	}
      if (tgetent(bp, term) != 1)
	{
	  my_putstr_err("error tgetent.\n");
	  exit(EXIT_FAILURE);

	}
    }
  termcap->clstr = xtgetstr("cl", (char **)&area);
  termcap->sostr = xtgetstr("so", (char **)&area);
  termcap->sestr = xtgetstr("se", (char **)&area);
  termcap->cmstr = xtgetstr("cm", (char **)&area);
  termcap->vistr = xtgetstr("vi", (char **)&area);
  termcap->vestr = xtgetstr("ve", (char **)&area);
  termcap->dlstr = xtgetstr("dl", (char **)&area);
  termcap->krstr = xtgetstr("kr", (char **)&area);
  termcap->klstr = xtgetstr("kl", (char **)&area);
  termcap->kDstr = xtgetstr("kD", (char **)&area);
  termcap->kbstr = xtgetstr("kb", (char **)&area);
  termcap->usstr = xtgetstr("us", (char **)&area);
  termcap->uestr = xtgetstr("ue", (char **)&area);
}

void                    get_size(t_term *termcap)
{
  struct winsize        size;

  if (ioctl(0, TIOCGWINSZ, &size) < 0)
    my_putstr_err("Error ioctl\n");
  termcap->col = size.ws_col;
  termcap->li = size.ws_row;
}

t_term			*init_termcap()
{
  t_term		*termcap;
  char			*term;

  termcap = xmalloc(sizeof(*termcap));
  if ((term = getenv("TERM")) == NULL)
    {
      my_putstr_err("error getenv\n.");
      exit(EXIT_FAILURE);
    }
  term = concat_str(term, "-noapp");
  get_size(termcap);
  get_capa(termcap, term);
  return (termcap);
}

int			count_nb_char(int ac, char **av)
{
  int			cpt;

  cpt = 0;
  cpt += (ac - 2);
  while (ac > 1)
    {
      cpt += my_strlen(av[ac - 1]);
      ac--;
    }
  return (cpt);
}

void			init_select(t_select **select, int ac, char **av)
{
  *select = xmalloc(sizeof(**select));
  (*select)->ac = ac;
  (*select)->av = av;
  (*select)->choices = NULL;
  (*select)->args = NULL;
  (*select)->last_arg = NULL;
  (*select)->pos = NULL;
  (*select)->termcap = init_termcap();
  (*select)->nb_char = count_nb_char(ac, av);
}
