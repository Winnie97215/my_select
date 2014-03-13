/*
** term_cfg.c for my_select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Tue Jul  6 03:12:49 2010 axel catusse
** Last update Mon Sep 13 15:38:45 2010 axel catusse
*/

#include <term.h>
#include <sys/ioctl.h>
#include <stdlib.h>
#include "my_select.h"
#include "libmy.h"

void			term_cfg()
{
  struct termios	term;

  if (ioctl(0, TIOCGETA, &term) < 0)
    my_putstr_err("TCGETS failed.");
  term.c_lflag &= ~(ICANON|ECHO);
  term.c_cc[VMIN] = 1;
  term.c_cc[VTIME] = 0;
  if (ioctl(0, TIOCSETA, &term) < 0)
    my_putstr_err("TCSETS failed");
}
