# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/03 22:51:05 by scavalli          #+#    #+#              #
#    Updated: 2025/03/06 11:09:52 by scavalli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE =  ft_printf.c ft_putnbr_hex.c ft_putnbr.c \
		ft_putptr_hex.c ft_putstr.c

NAME=libftprintf.a
CC=clang
CFLAGS=-Wall -Wextra -Werror
SRCS = $(FILE)
OBJS = ${SRCS:.c=.o}

.PHONY: all clean fclean re

all : $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all



