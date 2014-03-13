/*
** display_menu.c for select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Thu Jul  8 02:20:17 2010 axel catusse
** Last update Thu Jul  8 22:53:29 2010 axel catusse
*/

#include <stdlib.h>
#include "libmy.h"

static void		display_my_select()
{
  my_putstr("\t\t\t\t\t\
                                      ___                  __\n");
  my_putstr("\t\t\t\t\t\
                                     /\\_ \\                /\\ \\__\n");
  my_putstr("\t\t\t\t\t  ___ ___   __  \
__        ____     __\\//\\ \\      __    ___\\ \\ ,_\\\n");
  my_putstr("\t\t\t\t\t/' __` __`\\/\\ \\/\\ \\      /',_\
_\\  /'__`\\\\ \\ \\   /'__`\\ /'___\\ \\ \\/\n");
  my_putstr("\t\t\t\t\t/\\ \\/\\ \\/\\ \\ \\ \\_\\ \\    \
/\\__, `\\/\\  __/ \\_\\ \\_/\\  __//\\ \\__/\\ \\ \\_\n");
  my_putstr("\t\t\t\t\t\\ \\_\\ \\_\\ \\_\\/`____ \\   \\\
/\\____/\\ \\____\\/\\____\\ \\____\\ \\____\\\\ \\__\\\n");
  my_putstr("\t\t\t\t\t \\/_/\\/_/\\/_/`/___/> \\   \\/_\
__/  \\/____/\\/____/\\/____/\\/____/ \\/__/\n");
  my_putstr("\t\t\t\t\t                /\\___/\n");
  my_putstr("\t\t\t\t\t                \\/__/\n");
}

void			display_menu()
{
  display_my_select();
  my_putstr("\n+--------------------------------------\
-------------------------------+\n");
  my_putstr("|  SPACE KEY     : SELECT THE ARGUMENT.\
                               |\n");
  my_putstr("|  ENTER KEY     : RETURN YOUR CHOICES.\
                               |\n");
  my_putstr("|  DEL & BS KEY  : DELETE THE ARGUMENT FROM LIST.\
                     |\n");
  my_putstr("|  ESCAPE KEY    : QUIT THE PROGRAM AND RETURN NOTHING.\
               |\n");
  my_putstr("|  L/R ARROW KEY : MOVE CURSOR.\
                                       |");
  my_putstr("\n+----------------------------------\
-----------------------------------+\n");
  my_putstr("\n\n\033[36mARGUMENT'S LIST :\033[37m");
}
