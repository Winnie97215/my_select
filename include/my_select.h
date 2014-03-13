/*
** my_select.h for my_select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Tue Jul  6 03:08:50 2010 axel catusse
** Last update Mon Sep 13 15:41:51 2010 axel catusse
*/

#ifndef			MY_SELECT_H_
# define		MY_SELECT_H_

/*
** -----------------------
** - DEFINES
** -----------------------
*/

# ifndef		_FreeBSD_H_
#  define		_FreeBSD_H_
#  define		TIOCGETA        TCGETS
#  define		TIOCSETA        TCSETS
# endif			/* !_FreeBSD_H_ */

#define			ON		1
#define			OFF		0
#define			TRUE		1
#define			FALSE		0

/*
** -----------------------
** - STRUCTURES
** -----------------------
*/

typedef struct		s_args
{
  char			*arg;
  int			select;
  struct s_args		*next;
  struct s_args		*prev;
}			t_args;

typedef struct		s_term
{
  char			*clstr;
  char			*sostr;
  char			*sestr;
  char			*cmstr;
  char			*vistr;
  char			*vestr;
  char			*dlstr;
  char			*krstr;
  char			*klstr;
  char			*kDstr;
  char			*kbstr;
  char			*usstr;
  char			*uestr;
  int			col;
  int			li;
}			t_term;

typedef struct		s_select
{
  struct s_args		*args;
  struct s_args		*last_arg;
  struct s_args		*pos;
  struct s_term		*termcap;
  int			nb_char;
  int			ac;
  char			**av;
  char			*choices;
}			t_select;

/*
** -----------------------
** - PROTOTYPES
** -----------------------
*/

void                    get_size(t_term *termcap);
void			free_my_select(t_select *select);
void			my_bzero(char *str, int c);
char			*xtgetstr(char *cap, char **area);
void			display_menu();
void			check_delbs_touch(t_select *select, char *buffer);
void			del_bs_pressed(t_select *select, char *buffer);
void			my_signal(t_select *select);
void			arrow_pressed(t_select *select, char *buffer);
void			xtputs(char *str, int i, int (*f)(int));
void			space_pressed(t_select *select, char *buffer);
int			escape_pressed(t_select *select, char *buffer);
char			*concat_str(char *s1, char *s2);
int			remove_choices(t_select *select);
int			enter_pressed(char *buffer);
char			*check_arrow(char *str);
void			term_cfg();
int			my_outc(int c);
int			handles_keys(t_select *select);
void			fill_args_list(t_select *select);
void			my_select(t_select *select);
void			display_args(t_select *select);
void			init_select(t_select **select, int ac, char **av);

#endif			/* !MY_SELECT_H_ */
