# Target
NAME		= libft.a

# Compiler And Flags
CC		= gcc
CFLAGS		= -Wall -Werror -Wextra
DEP_FLAGS	= -MMD

# Headers
HEADER		= libft.h
LST_HEADER	= libft_lst.h

# Directories
INC_DIR 	= ./includes/
SRC_DIR		= ./src/
OBJ_DIR 	= ./obj/
BIN_DIR 	= ./bin/
TST_DIR		= ./tests/

# Subdirectories
SUB_DIRS = ft_printf get_next_line

# Target Bundle
NAMEBUNDLE = libftall.a
#SubTargets
PRINTF = $(word 1, $(SUB_DIRS))/libftprintf.a
GNL = $(word 2, $(SUB_DIRS))/get_next_line.a

# Archive Creation 
ARS	= ar -rcs

# Remove Command
RM	= rm -rf

# No Verbose output
ifndef VERBOSE
	MAKEFLAGS += --silent
endif

# Include Dependecies
-include $(DEPS)

# Include Source File list
-include ./includes/source_list

.PHONY:	all clean fclean re help $(MAIN) bundle

# Create Object files From Source Files (filename.c -> filename.o)
OBJS := $(foreach file,$(SRC_FILES),$(addprefix $(OBJ_DIR)ft_, $(addsuffix .o,$(file))))
DEPS := $(foreach file,$(SRC_FILES),$(addprefix $(OBJ_DIR)ft_, $(addsuffix .d,$(file))))

# Rule to make a main if we pass it per parameter, make help as default instead
ifndef MAIN
	.DEFAULT_GOAL = help
else
	.DEFAULT_GOAL = $(MAIN)
	MAIN_SRC = $(addprefix $(TST_DIR)main_, $(addsuffix .c,$(MAIN)))
	ifdef DEBUG
		CFLAGS += -g -fsanitize=address -fsanitize=leak
	endif
endif

# Make Recipes only for all 
all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS) 
	$(ARS) $(NAME) $(OBJS)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c Makefile $(INC_DIR)$(HEADER) $(INC_DIR)$(HEADER) $(INC_DIR)$(LST_HEADER)
	$(CC) $(CFLAGS) $(DEP_FLAGS) -I $(INC_DIR) -c $< -o $@

# Make Recipe for a Single Binary (Debugging and testing purposes)
$(MAIN): $(BIN_DIR) $(NAME)
	$(CC) $(CFLAGS) -I $(INC_DIR) $(MAIN_SRC) $(NAME) -o $(BIN_DIR)$(MAIN)

$(BIN_DIR):
	@mkdir $(BIN_DIR)

# Make Recipe for build all mains (Debugging and testing purposes)
# TODO?


# Make recipes for the true all, "bundle". Makes libft printf and gextnextline
bundle: all
	for dir in $(SUB_DIRS); do $(MAKE) -C $$dir; done
	$(ARS) $(NAMEBUNDLE) $(OBJS) ft_printf/obj/*.o get_next_line/obj/*.o 



# Cleaning and Deletions
clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME) $(BIN_DIR) *.a *.s *.i *.bc

#rebuild
re: fclean all

# Print Usage Message, DEFAULT_GOAL
help:
	@echo "Usage :"
	@echo ""
	@echo "$$ make all"
	@echo "	Build the archive (libft.a)"
	@echo ""
	@echo "$$ make bundle"
	@echo "	Build the archive (libft.a) containing ft_printf and get_next_line"
	@echo ""
	@echo "$$ make all VERBOSE=y"
	@echo "	Build the archive (libft.a) without --silent flag"
	@echo "	For all recipes --silent flag is activated by default"
	@echo "	Consider deactivating it if needed"
	@echo ""
	@echo "$$ make MAIN=<functionName>"
	@echo "	Example:"
	@echo "		make MAIN=atoi"
	@echo "	Build archive (libft.a) and a binary with the test for main name"
	@echo "	Intended for testing"
	@echo "	(see mains at: test/main_*)"
	@echo ""
	@echo "$$ make MAIN=<functionName> DEBUG=y"
	@echo "	as make MAIN=<functionName> but with debug (-g) and sanitize flags"
	@echo "	Intended for debugging"

