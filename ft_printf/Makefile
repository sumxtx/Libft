
CC = cc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
ARS  = ar crs
SRCS = ft_printf.c ft_putnums.c ft_putstr.c
OBJS = $(SRCS:.c=.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(ARS) $(NAME) $(OBJS)
	
%.o:%.c ft_printf.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@

bin: all
	$(CC) $(CFLAGS) $(NAME) main.c

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
