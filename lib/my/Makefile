##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## Compiles my library
##

SRC			=	$(wildcard *.c)

OBJ			=	$(SRC:.c=.o)

NAME		=	libmy.a

NAME_TESTS	=	unit_tests

all:	$(NAME)
	cp $(NAME) ..

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		find -type f -name "*~" -delete -or -name "#*#" -delete
		find -type f -name "*.gcno" -delete -or -name "*.gcda" -delete
		find -type f -name "*.o" -delete
		find -type f -name "vgcore.*" -delete

fclean: clean
		rm -f $(NAME) $(NAME_TESTS)
		find -type f -name "*.a" -delete
		find -type f -name "a.out" -delete

re: 	fclean all

.PHONY: all, clean, fclean, re