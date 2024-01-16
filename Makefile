# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/14 05:19:01 by smoraes-          #+#    #+#              #
#    Updated: 2024/01/16 06:00:25 by smoraes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
LIB	= libft.h
CC	= cc
CFLAGS	= -Wall -Werror -Wextra
ARS	= ar crs
BIN	= lbft
SRC	= ft_isalnum.c ft_isalpha.c ft_isascii.c  ft_isdigit.c  ft_isprint.c\
	  ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
	  ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c\
	  main.c
OBJS	= $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJS)
	$(ARS) $(NAME) $(OBJS)

%.o:%.c
	cc $(CFLAGS) -c -o $@ $^

bin: $(OBJS) $(NAME) $(MAINOBJ)
#	$(CC) $(CFLAGS) -c $(MAINSRC)
#	$(CC) $(CFLAGS) -o $(BIN) $(MAINOBJ) -L. $(NAME)
#	chmod +x $(BIN)

clean:
	rm -rf $(BIN) $(OBJS) $(MAINOBJ) $(NAME) *.out
fclean:
	rm -rf $(BIN) $(OBJS) $(NAME)

re: clean all

