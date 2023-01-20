##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

.SILENT:

SRC = $(wildcard src/*.c)

OBJ = $(SRC:.c=.o)

NAME = ./bin

all: $(NAME) clean

$(NAME): $(OBJ)
	gcc -fverbose-asm -w -c $(SRC)
	gcc -o $@ $^

clean:
	find . -name "*.o" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
