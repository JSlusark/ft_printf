# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 11:53:09 by jessica           #+#    #+#              #
#    Updated: 2024/05/24 17:21:02 by jslusark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I../headers
OFILES = $(CFILES:.c=.o)

GREEN = \033[0;32m
YELLOW = \033[0;33m
RED = \033[0;31m
RESET = \033[0m

CFILES = \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_memcpy.c \
ft_memmove.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_memchr.c \
ft_memcmp.c \
ft_strnstr.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_itoa.c \
ft_striteri.c \
ft_strmapi.c \
ft_split.c



all : $(NAME)
	@echo "$(YELLOW)All $(NAME)'s files are up-to-date$(RESET)"

$(NAME) : $(OFILES)
	ar rcs $(NAME) $(OFILES)
	@echo "$(GREEN)--> $(NAME) library archived and indexed$(RESET)"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)--> Compiled $(NAME)'s .c files to .o $<$(RESET)"

clean:
	rm -f $(OFILES)
	@echo "$(RED)--> Removed $(NAME)'s object files$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(RED)--> Removed $(NAME) library$(RESET)"

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
