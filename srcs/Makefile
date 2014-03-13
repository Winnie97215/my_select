##
## Makefile for select in /u/all/catuss_a/cu/rendu/c/my_select/srcs
## 
## Made by axel catusse
## Login   <catuss_a@epitech.net>
## 
## Started on  Thu Jul  8 23:38:00 2010 axel catusse
## Last update Thu Mar 13 18:04:01 2014 axl
##

################################################################################################
NAME 		=	my_select
INCLUDE         =       -I../include/ -L../lib
CC_FreeBSD      =       gcc
CC_i386-linux	=	gcc
RM_i386-linux	=	rm -f
RM_FreeBSD      =       rm -f
CFLAGS          +=      -W -Wall -ansi -pedantic $(INCLUDE)
LIB		=	-lmy -ltermcap
OBJS            =       $(SRCS:.c=.o)
DIR		=	../
################################################################################################
SRCS		=	main.c				\
			check_arrow.c \
			check_touch.c\
			concat_str.c\
			display_args.c\
			display_menu.c\
			fill_args_list.c\
			free_my_select.c\
			handles_keys.c\
			init_fct.c\
			key_pressed.c\
			my_bzero.c\
			my_outc.c\
			my_select.c\
			my_signal.c\
			term_cfg.c\
			xtgetstr.c\
			xtputs.c


################################################################################################
$(NAME)         :	$(OBJS)
		@gcc -o $(NAME) $(OBJS) $(CFLAGS) $(LIB)
		@cp $(NAME) $(DIR)
		@printf "\n\033[32m     ---[$(NAME) HAS BEEN CREATED]---\033[37m\n\n"

all             :       $(NAME)

clean           :
		@rm -f $(OBJS)
		@rm -rf *~

fclean		:	clean
		@rm -f $(NAME)

re              :       fclean all

.c.o            :
		@printf "[gcc]  $<\n"
		@gcc $(CFLAGS) $(INCLUDE) -c $< -o $@

.PHONY          :       all clean fclean re

.SUFFIXES       :       .c .o
################################################################################################