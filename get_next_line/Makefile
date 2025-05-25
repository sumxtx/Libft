# Target
NAME = get_next_line.a

# Compiler and Flags
CC = cc
CFLAGS = -Wall -Werror -Wextra
DEP_FLAGS = -MMD

# Headers
HEADER = get_next_line.h

# Archive Creation
ARS = ar crs

# Directories
SRC_DIR = ./src/
INC_DIR = ./includes/
OBJ_DIR = ./obj/
BIN_DIR 	= ./bin/
TST_DIR		= ./tests/
BIN = test

# Soruce Files List
SRC_FILES = get_next_line get_next_line_utils
MAIN_SRC = $(TST_DIR)test.c

# Remove Command
RM = rm -rf

# No verbose Output
ifndef VERBOSE
	MAKEFLAGS += --silent
endif

.PHONY: all clean fclean re bin

# Create Object files from Source Files
OBJS := $(foreach file,$(SRC_FILES),$(addprefix $(OBJ_DIR),$(addsuffix .o, $(file))))
DEPS := $(foreach file,$(SRC_FILES),$(addprefix $(OBJ_DIR),$(addsuffix .d, $(file))))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(ARS) $(NAME) $(OBJS)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INC_DIR)$(HEADER) Makefile
	$(CC) $(CFLAGS) $(DEP_FLAGS) -I $(INC_DIR) -c $< -o $@

bin: $(BIN_DIR) $(NAME)
	$(CC) -g -I $(INC_DIR) $(MAIN_SRC) $(NAME) -o $(BIN_DIR)$(BIN)

$(BIN_DIR):
	@mkdir $(BIN_DIR)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME) $(BIN_DIR)

re: fclean all
