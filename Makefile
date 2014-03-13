##
## Makefile<4> for Makefile in /u/all/catuss_a/cu/rendu/42sh/42sh
## 
## Made by axel catusse
## Login   <catuss_a@epitech.net>
## 
## Started on  Sat Jun 19 04:14:14 2010 axel catusse
## Last update Thu Mar 13 18:03:14 2014 axl
##

#############################################################################
NAME		= mysh
#############################################################################
all:
	@printf "\n            ---[LIBRARY]---\n"
	@cd lib && make -f Makefile
	@printf "\n            ---[SOURCES]---\n"
	@cd srcs && make -f Makefile

re: fclean all

clean:
	@printf "            ---[CLEAN]---\n"
	@cd lib && make clean -f Makefile
	@cd srcs && make clean -f Makefile

fclean: clean
	@printf "            ---[FCLEAN]---\n"
	@cd lib && make fclean -f Makefile
	@cd srcs && make fclean -f Makefile
	@rm -rf $(NAME)
#############################################################################