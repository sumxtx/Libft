# Variables
NAME				= libft.a
CC					= cc
CFLAGS			= -Wall -Werror -Wextra
DFLAGS			= -MMD -MP
DBG   			= -g
ARS					= ar -rcs
INC					= libft.h
INC_DIR 		= ./inc
SRC_DIR			= ./src
OBJ_DIR 		= ./obj
DEP_DIR			= ./dep
RM					= rm -rf
.PHONY:		all clean fclean re bonus
#MAKEFLAGS += --silent

# Include Dependecies
DEPS = ${DEP_DIR} ${BDEP_DIR}
-include ${DEPS}

# Mandatory Part Source Files
SRC_FILES					=\
	ft_isalnum		ft_isalpha		ft_isascii\
	ft_isdigit		ft_isprint		ft_strchr			ft_calloc\
	ft_strdup			ft_strlcat		ft_strlcpy		ft_strtrim\
	ft_strlen			ft_strncmp		ft_strnstr		ft_strmapi\
	ft_strrchr		ft_tolower		ft_toupper		ft_memset\
	ft_bzero			ft_memcpy			ft_memmove		ft_memchr\
	ft_memcmp			ft_strjoin		ft_split			ft_substr\
	ft_atoi				ft_putchar_fd ft_putstr_fd	ft_putendl_fd\
	ft_putnbr_fd	ft_itoa				ft_striteri
	  
# Bonus Part Source Files
BSRC_FILES 				=\
	ft_lstnew_bonus 			ft_lstadd_front_bonus	ft_lstsize_bonus\
	ft_lstadd_back_bonus	ft_lstlast_bonus			ft_lstdelone_bonus\
	ft_lstclear_bonus			ft_lstiter_bonus			ft_lstmap_bonus

# Create Source Files and Object files objects (filename.c, filename.o)
SRC					= $(addprefix ${SRC_DIR}/, $(addsuffix .c,${SRC_FILES} ${BSRC_FILES}))
OBJ 				= $(addprefix ${OBJ_DIR}/, $(addsuffix .o,${SRC_FILES} ${BSRC_FILES}))
DEP					= $(addprefix ${DEP_DIR}/, $(addsuffix .d,${SRC_FILES} ${BSRC_FILES}))
#Bonus
#BSRC				= $(addprefix ${BSRC_DIR}/,$(addsuffix .c,${BOBJ_FILES}))
#BOBJS 			= $(addprefix ${BOBJ_DIR}/,$(addsuffix .c,${BOBJ_FILES}))
#BDEPS				= $(addprefix ${BDEP_DIR}/,$(addsuffix .d,${BOBJ_FILES}))

# Make Recipes 
all: ${NAME}

${NAME}: ${OBJ}
	$(ARS) $(NAME) $(OBJ)

${OBJ}: ${SRC} Makefile ${INC_DIR}/${INC}
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) ${DFLAGS} -c $< -I ${INC_DIR} -o $@

# Bonus Part 
#bonus: $(BONUS)
#$(BONUS):$(NAME) $(BONUS_OBJS)
#	$(ARS) $(NAME) $(BONUS_OBJS)
#	touch $@

#cleanning
clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME) $(BONUS) *.out *.a *.s *.i *.bc

#rebuild
re: fclean all
