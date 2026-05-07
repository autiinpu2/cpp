CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98

NAME := phonebook

SRC := phonebook.cpp contact.cpp main.cpp

OBJ_DIR := obj
OBJS := $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[32m$(NAME) created"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "\033[32mObj cleared"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[32mEverything cleared"

re: fclean all

.PHONY: all clean fclean re
