/*
** my_signal.c for my_seect in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Wed Jul  7 22:57:54 2010 axel catusse
** Last update Thu Jul  8 23:23:30 2010 axel catusse
*/

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <term.h>
#include "libmy.h"
#include "my_select.h"

t_select *select_cpy;

static void             catch_sigwinch()
{
  xtputs(select_cpy->termcap->clstr, 1, my_outc);
  get_size(select_cpy->termcap);
  display_args(select_cpy);
}

static void             catch_sigint()
{
  free_my_select(select_cpy);
  xtputs(select_cpy->termcap->vestr, 1, my_outc);
  exit(EXIT_SUCCESS);
}

static void             catch_sigtstp()
{
  return ;
}

void			my_signal(t_select *select)
{
  select_cpy = select;
  if (signal(SIGINT, catch_sigint) == SIG_ERR
      || (signal(SIGWINCH, catch_sigwinch) == SIG_ERR)
      || (signal(SIGTSTP, catch_sigtstp) == SIG_ERR))
    my_printf_err("error: signal(): An error has occured.\n");
}
