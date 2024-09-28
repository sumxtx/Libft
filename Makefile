# Vars
CC			= cc -g
RM			= rm -rf
ARS			= ar -rcs
HEAD		= libft.h
NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra
BONUS		= .bonus
#MAKEFLAGS += --silent
.PHONY:		all clean fclean re bonus



# Mandatory Part
SRC	=\
	ft_isalnum.c	ft_isalpha.c	ft_isascii.c	ft_strtrim.c\
	ft_isdigit.c	ft_isprint.c	ft_strchr.c		ft_calloc.c\
	ft_strdup.c		ft_strlcat.c	ft_strlcpy.c	ft_strtrim.c\
	ft_strlen.c		ft_strncmp.c	ft_strnstr.c	ft_strmapi.c\
	ft_strrchr.c	ft_tolower.c	ft_toupper.c	ft_memset.c\
	ft_bzero.c		ft_memcpy.c		ft_memmove.c	ft_memchr.c\
	ft_memcmp.c		ft_strjoin.c	ft_split.c		ft_substr.c\
	ft_atoi.c		ft_putchar_fd.c ft_putstr_fd.c	ft_putendl_fd.c\
	ft_putnbr_fd.c	ft_itoa.c		ft_striteri.c
	  
OBJS 		= $(SRC:.c=.o)

# Bonus Part
BONUS_SRC 	=\
	ft_lstnew_bonus.c 		ft_lstadd_front_bonus.c	ft_lstsize_bonus.c\
	ft_lstadd_back_bonus.c	ft_lstlast_bonus.c		ft_lstdelone_bonus.c\
	ft_lstclear_bonus.c		ft_lstiter_bonus.c		ft_lstmap_bonus.c\

BONUS_OBJS 	= $(BONUS_SRC:.c=.o) 

all: $(NAME)

$(NAME):$(OBJS)
	$(ARS) $(NAME) $(OBJS)

%.o:%.c libft.h Makefile
	cc $(CFLAGS) -c $< -o $@

# Bonus Part 
# We create a file called .bonus to do a target-like for the bonus
# When calling the bonus rule this file get touched, so we can timestamp
# Once we call make again and theres no change on name, neither on the 
# BONUS_OBJs the timestamp ins't affected, so no relink
bonus: $(BONUS)

$(BONUS):$(NAME) $(BONUS_OBJS)
	$(ARS) $(NAME) $(BONUS_OBJS)
	touch $@

#cleanning
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME) $(BONUS) bonus *.out *.a *.s *.i *.bc

#rebuild
re: fclean all
