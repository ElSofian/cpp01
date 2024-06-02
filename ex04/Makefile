# **************************************************************************** #
# VARIABLES

NAME		= replace
CC			= c++
FLAGS		= -Wall -Wextra -Iinc -std=c++98
RM			= rm -rf

# **************************************************************************** #
# COLORS

GREEN		= \033[0;32m
GREY		= \033[1;30m
PURPLE		= \033[0;35m
BLUE		= \033[0;94m
CYAN		= \033[0;36m
PINK		= \033[1;35m
RED			= \033[0;31m
END_COLOR	= \033[0;39m


# **************************************************************************** #
# RULES

all: $(NAME) utils

$(NAME):
	@$(CC) $(FLAGS) main.cpp -o $(NAME)
	@echo "$(GREEN)[Success]$(END_COLOR) Replace is ready !"

utils:
	@echo "bonjour\nje\nsuis\nsofian" > test

clean:
	@$(RM) test.replace
	@echo "$(GREY)[Clean]$(END_COLOR) Objects have been deleted"

fclean:
	@$(RM) $(NAME) a.out test test.replace
	@echo "$(GREY)[Clean]$(END_COLOR) $(NAME) and objects have been deleted"

re: fclean all
	@echo "$(PURPLE)[Rebuild]$(END_COLOR) Done."

.PHONY: all clean fclean re