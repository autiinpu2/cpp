CXX := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98

NAME := Polymorphism

SRC := main.cpp animal.cpp dog.cpp cat.cpp

OBJ_DIR := obj
OBJS := $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

run:
	make
	./Polymorphism

run2:
	make re
	./Polymorphism

.PHONY: all clean fclean re
