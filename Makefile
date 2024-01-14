# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/14 05:19:01 by smoraes-          #+#    #+#              #
#    Updated: 2024/01/14 18:03:25 by smoraes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= cc
CFLAGS	= -Wall -Werror -Wextra
ARS	= ar crs

BIN	= bin
MAINSRC	= main.c
MAINOBJ	= main.o
SRC	= *.c
#SRC	= $(shell find . -type f -iname 'ft*.c')
OBJS	= $(SRC:.c=.o)

all: libft.a

libft.a:
	$(CC) $(CFLAGS) -c $(SRC)
	$(ARS) $(NAME) ${OBJS}

bin: $(OBJS) $(NAME) $(MAINOBJ)
	$(CC) $(CFLAGS) -c $(MAINSRC) -o $(MAINOBJ)
	$(CC) -o $(BIN) $(MAINOBJ) -L. $(NAME)
	chmod +x $(BIN)

clean:
	rm -rf $(BIN) $(OBJS) $(MAINOBJ) $(NAME) *.out
fclean:
	rm -rf $(BIN) $(OBJS) $(NAME)

re: clean all

