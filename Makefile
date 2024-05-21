# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 15:25:10 by jslusark          #+#    #+#              #
#    Updated: 2024/05/21 17:14:05 by jslusark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./headers
OFILES = $(CFILES:.c=.o)

CFILES = \
ft_printf.c \
src/ft_printchar.c \
src/ft_printstr.c \
src/ft_printnum.c \
src/ft_printunsigned.c \
src/ft_printhex.c \
src/ft_printpointer.c

all : $(NAME)
	@echo "--> Created file"

$(NAME) : $(OFILES)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OFILES)
	ranlib $(NAME)
	@echo "--> Library archived and indexed"

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C ./libft
	rm -f $(OFILES)
	@echo "--> Removed object files"

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)
	@echo "--> Removed $(NAME) file"

re: fclean all
	@echo "--> Recompiled everything"

.PHONY: all clean fclean re
