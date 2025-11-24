CC = g++
CFLAGS = -Wall -Wextra -Werror -Iinclude -std=c++98

SRC = src/*.cpp
	  
HEADER = include/*.hpp

OBJ_DIR = obj
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)
NAME = ClapTrap

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ) 
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

$(OBJ_DIR) :
	@mkdir -p $(OBJ_DIR)

force :
%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -O3 -c $< -o $@

$(OBJ_DIR)/%.o: %.c Makefile | $(OBJ_DIR)
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -O3 -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
