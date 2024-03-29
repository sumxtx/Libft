# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/14 05:19:01 by smoraes-          #+#    #+#              #
#    Updated: 2024/01/16 09:45:36 by smoraes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# vars
NAME	= libft.a
LIB	= libft.h
CC	= cc
CFLAGS	= -Wall -Werror -Wextra
ARS	= ar crs
BIN	= lbft
SRC	= ft_isalnum.c ft_isalpha.c ft_isascii.c  ft_isdigit.c  ft_isprint.c\
	  ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
	  ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c\
	  ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_memcmp.c
MSRC	= main.c
OBJS	= $(SRC:.c=.o)
MOBJ	= main.o
RM	= rm -rf


.PHONY: all clean fclean re flirt
MAKEFLAGS += --silent

# base project
all: $(NAME)

$(NAME):$(OBJS)
	@echo "\n\n(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando, espere unos segundos..."
	$(ARS) $(NAME) $(OBJS)
	@echo "\n\n(•̀ᴗ•́)و $(NAME) generado!"

%.o:%.c
	cc $(CFLAGS) -c $^ -o $@

# build a main
bin: $(OBJS) $(NAME) $(MSRC) $(MOBJ)
	@echo "\n\n(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando, espere unos segundos..."
	$(CC) $(CFLAGS) -c $(MSRC) -o $(MOBJ)
	$(CC) $(CFLAGS) $(MOBJ) $(OBJS) -o $(BIN) -L. $(NAME)
	chmod +x $(BIN)
	@echo "\n\n(*・‿・)ノ⌒*:･ﾟ✧ Ejecutable \"$(BIN)\" generado!"

flirt:
	@echo "\n\n (◍•ᴗ•◍)❤ Hi, Sweetie!!! How ya doing??\n\n"

#cleanning
clean:
	$(RM) $(OBJS)
	@echo "\n\n¯\_(ツ)_/¯ Objectos removidos!"
fclean:
	$(RM) $(OBJS) $(BIN)
	@echo "\n\n¯\_༼ಥ ‿ಥ༽_/¯ Objectos y Ejecutable removidos!"
re: 
	$(RM) $(OBJS) $(BIN) $(NAME) *.out *.s *.i
	@echo "\n\n AaAla!!! a tomar x qele   (╯°□°）╯︵ ┻━┻$(NAME)"
	@sleep 3
	@clear
	@echo "\n\n ╾━╤デ╦︻(▀̿Ĺ̯▀̿ ̿) What happened here? Exactly. Nothing!"
	@sleep 3
	@clear
