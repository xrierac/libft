OBJ_DIR = .
BIN_DIR = .
NAME = $(BIN_DIR)/libft_test
INC_DIR = .
SRC_DIR = .

SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(wildcard $(OBJ_DIR)/*.o)

CFLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJECTS)
	cc $(CFLAGS) $(OBJECTS) -o $(NAME)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	cc -c $(CFLAGS) $< -o $@

.PHONY : all clean fclean re

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
