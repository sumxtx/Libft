# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/14 05:19:01 by smoraes-          #+#    #+#              #
#    Updated: 2024/01/14 11:42:28 by smoraes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= cc
CFLAGS	= -Wall -Werror -Wextra
ARS	= ar crs

BIN	= bin
MAIN	= main.o
SRC	= $(shell find . -type f -iname ft*.c)
OBJS	= $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	$(ARS) $(NAME) ${OBJS}

bin: $(OBJS) $(NAME)
	$(CC) $(CFLAGS) -c main.c -o $(MAIN)
	$(CC) -o $(BIN) $(MAIN) -L. $(NAME)
	chmod +x $(BIN)

clean:
	rm -rf $(BIN) $(OBJS)
fclean:
	rm -rf $(BIN) $(OBJS) $(NAME)

re: clean all

