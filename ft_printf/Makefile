# Target
NAME = libftprintf.a

# Compiler And Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror
DEP_FLAGS	= -MMD

# Headers
HEADER = ft_printf.h

# Archive Creation 
ARS  = ar crs

# Directories
SRC_DIR = ./src/
INC_DIR = ./includes/
OBJ_DIR = ./obj/
BIN_DIR 	= ./bin/
TST_DIR		= ./tests/
BIN = test

# Sources Files List
SRC_FILES = printf printf_utils
MAIN_SRC = $(TST_DIR)test.c

# Remove Command
RM = rm -rf

# No Verbose output
ifndef VERBOSE
	MAKEFLAGS += --silent
endif

.PHONY: all clean fclean re bin

# Create Object files From Source Files (filename.c -> filename.o)
OBJS := $(foreach file,$(SRC_FILES),$(addprefix $(OBJ_DIR)ft_, $(addsuffix .o,$(file))))
DEPS := $(foreach file,$(SRC_FILES),$(addprefix $(OBJ_DIR)ft_, $(addsuffix .d,$(file))))

# Make all
all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(ARS) $(NAME) $(OBJS)
	
$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INC_DIR)$(HEADER) Makefile
	$(CC) $(CFLAGS) $(DEP_FLAGS) -I $(INC_DIR) -c $< -o $@


# Rule for making the test binary
bin: $(BIN_DIR) $(NAME)
	$(CC) $(CFLAGS) -I $(INC_DIR) $(MAIN_SRC) $(NAME) -o $(BIN_DIR)$(BIN)

$(BIN_DIR):
	@mkdir $(BIN_DIR)

# Cleaning 
clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME) $(BIN_DIR)

re: fclean all
