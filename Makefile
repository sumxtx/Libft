# Target
NAME		= libft.a

# Compiler And Flags
CC		= gcc
CFLAGS		= -Wall -Werror -Wextra
DEP_FLAGS	= -MMD -MP
# make BUILD_DEBUG=y
ifdef BUILD_DEBUG
	CFLAGS += -g -fsanitize=address -fsanitize=leak
endif

# Headers
HEADER		= libft.h

# Directories
INC_DIR 	= ./includes
SRC_DIR		= ./src
OBJ_DIR 	= ./obj
BIN_DIR 	= ./bin

# Archive Creation 
ARS	= ar -rcs

# Remove Command
RM	= rm -rf

# No Verbose output
#MAKEFLAGS += --silent

.PHONY:	all clean fclean re

# Include Dependecies
-include $(DEPS)

# Mandatory Part Source Files
SRC_FILES =\
	isalnum \
	isalpha \
	isascii \
	isdigit \
	isprint \
	strchr \
	calloc \
	strdup \
	strlcat \
	strlcpy \
	strtrim \
	strlen \
	strncmp \
	strnstr \
	strmapi \
	strrchr \
	tolower \
	toupper \
	memset \
	bzero \
	memcpy \
	memmove \
	memchr \
	memcmp \
	strjoin \
	split \
	substr \
	atoi \
	putchar_fd \
	putstr_fd \
	putendl_fd \
	putnbr_fd \
	itoa \
	striteri \
	lstnew_bonus \
	lstadd_front_bonus \
	lstsize_bonus \
	lstadd_back_bonus \
	lstlast_bonus \
	lstdelone_bonus\
	lstclear_bonus \
	lstiter_bonus \
	lstmap_bonus

# Create Object files From Source Files (filename.c -> filename.o)
OBJS := $(foreach file,$(SRC_FILES),$(addprefix $(OBJ_DIR)/ft_, $(addsuffix .o,$(file))))
DEPS := $(foreach file,$(SRC_FILES),$(addprefix $(OBJ_DIR)/ft_, $(addsuffix .d,$(file))))

# Build a single function with main for testing
#	make MAIN=isalpha
ifdef MAIN
	.DEFAULT_GOAL = $(MAIN)
# Build all (the whole archive)
else
	.DEFAULT_GOAL = all
endif

# Make Recipes for all 
all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(ARS) $(NAME) $(OBJS)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c Makefile $(INC_DIR)/$(HEADER)
	$(CC) $(CFLAGS) $(DEP_FLAGS) -I $(INC_DIR) -c $< -o $@

# Make Recipe for a Single Binary (Debugging and testing purposes)
# for example:
#	make MAIN=isalpha
# 	ft_isalpha.c + main_isalpha.c -> isalpha.out
$(MAIN): $(BIN_DIR)
	@echo $(MAIN)

$(BIN_DIR)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME) *.out *.a *.s *.i *.bc

#rebuild
re: fclean all
