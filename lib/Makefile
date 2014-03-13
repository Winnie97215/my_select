##
## Makefile<2> for Makefile in /u/all/catuss_a/cu/rendu/42sh/42sh
## 
## Made by axel catusse
## Login   <catuss_a@epitech.net>
## 
## Started on  Sat Jun 19 03:56:29 2010 axel catusse
## Last update Thu Mar 13 18:02:46 2014 axl
##

#################################################################################
NAME		=		libmy.a
CC_FreeBSD	=		gcc
CC_i386-linux	=		gcc
OBJS		=		$(SRCS:.c=.o)
IFLAGS		=		-I.
CFLAGS		+=		-W -Wall -ansi -pedantic $(IFLAGS)
AR		=		ar r
RANLIB		=		ranlib
RM_FreeBSD	=		rm -f
RM_i386-linux	=		rm -f
DIR		=		../include/
#################################################################################
SRCS		=		function.c			\
				function1.c			\
				function2.c			\
				my_getnbr.c			\
				xmalloc.c			\
				xwrite.c			\
				xfree.c				\
				my_strlen.c			\
				my_printf.c			\
				my_printf_err.c			\
				my_put_nbr.c			\
				my_putchar.c			\
				my_putchar_err.c		\
				my_putstr_err.c			\
				my_putstr.c			\
				my_strcmp.c			\
				my_strncmp.c			\
				my_str_to_wordtab.c		\
				my_strcpy.c			\
				my_strncpy.c			\
				my_putnbr_base.c		\
				my_strdup.c			\
				my_putnbr_base_unsigned.c

#################################################################################
$(NAME)		:	$(OBJS)
		@$(AR) $(NAME) $(OBJS)
		@$(RANLIB) $(NAME)
		@cp $(NAME) $(DIR)

all             :       $(NAME)

clean           :
		rm -rf $(OBJS)
		@rm -rf *~

fclean		:	clean
		rm -f $(NAME)

re              :       fclean all

.c.o		:
		@printf "\033[36m[gcc]\033[37m  $<\n"
		@gcc $(CFLAGS) $(INCLUDE) -c $< -o $@

.PHONY		:	all clean fclean re

.SUFFIXES	:	.c .o
#################################################################################