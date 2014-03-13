/*
** libmy.h for libmy in /u/all/catuss_a/cu/rendu/c/minishell1/lib
** 
** Made by axel catusse
** Login   <catuss_a@epitech.net>
** 
** Started on  Thu Jun  3 22:31:09 2010 axel catusse
** Last update Tue Jul  6 00:16:28 2010 axel catusse
*/

#ifndef			LIB_MY_H_
# define		LIB_MY_H_

void			xfree(void *ptr);
int			xwrite(int std, char *str, size_t len);
void			my_putstr_err(char *str);
void			my_put_nbr(int nb);
void			my_putstr(char *str);
void			my_putchar(char c);
void			my_putchar_err(char c);
char			*my_strncpy(char *dest, char *src, int n);
int			my_strlen(char *str);
void			my_printf(char *str, ...);
void			my_printf_err(char *str, ...);
int			my_putnbr_base(int nbr, char *base);
char			**my_str_to_wordtab(char *str);
int			my_strcmp(char *s1, char *s2);
int			my_strncmp(char *s1, char *s2, int n);
char			*my_strcpy(char *dest, char *src);
char			*my_strdup(char *str);
void			*xmalloc(size_t size);

#endif			/*LIB_MY_H_*/
