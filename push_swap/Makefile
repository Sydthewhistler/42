# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/13 12:53:00 by scavalli          #+#    #+#              #
#    Updated: 2025/03/13 12:57:02 by scavalli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE =  main.c utils.c check_input.c ft_printf.c ft_putnbr_hex.c ft_putnbr.c \
		ft_putptr_hex.c ft_putstr.c
NAME = push_swap
CC = clang
CFLAGS = -Wall -Wextra -Werror
SRCS = $(FILE)
OBJS = ${SRCS:.c=.o}

.PHONY: all clean fclean re

all : $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all