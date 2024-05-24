# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 15:25:10 by jslusark          #+#    #+#              #
#    Updated: 2024/05/24 17:23:48 by jslusark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./headers
OFILES = $(CFILES:.c=.o)

CFILES = \
printf/ft_printf.c \
printf/ft_printchar.c \
printf/ft_printstr.c \
printf/ft_printnum.c \
printf/ft_printunsigned.c \
printf/ft_printhex.c \
printf/ft_printpointer.c

GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
RESET = \033[0m

all: $(NAME)
	@echo "$(YELLOW)All $(NAME)'s files are up-to-date$(RESET)"

$(NAME): $(OFILES)
	@$(MAKE) -C ./libft
	@cp libft/libft.a $(NAME)
	@ar rcs $(NAME) $(OFILES)
	@ranlib $(NAME)
	@echo "$(GREEN)--> $(NAME) library archived and indexed$(RESET)"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)--> Compiled $(NAME)'s $<$(RESET)"

clean:
	@$(MAKE) clean -C ./libft
	@rm -f $(OFILES)
	@echo "$(RED)--> Removed $(NAME)'s object files $(RESET)"

fclean: clean
	@$(MAKE) fclean -C ./libft
	@rm -f $(NAME)
	@echo "$(RED)--> Removed $(NAME) file$(RESET)"

re: fclean all
	@echo "$(GREEN)--> Recompilation successful!$(RESET)"

%:
	@echo "$(RED)Error: target '$@' is not a valid target.$(RESET)"
	@echo "Please use one of the following valid targets:"
	@echo "- $(GREEN)make$(RESET): compiles the project"
	@echo "- $(GREEN)make re$(RESET): recompiles the project"
	@echo "- $(GREEN)make clean$(RESET): removes object files"
	@echo "- $(GREEN)make fclean$(RESET): removes object files and the final library"
	@exit 1

.PHONY: all clean fclean re
