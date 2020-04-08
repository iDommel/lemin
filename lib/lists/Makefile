##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## Compiles my library
##

SRC			=	double_circular_lists.c	\
				list_elements.c

OBJ			=	$(SRC:.c=.o)

NAME		=	liblists.a

all:	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ..

clean:
		find -type f -name "*~" -delete -or -name "#*#" -delete
		find -type f -name "*.gcno" -delete -or -name "*.gcda" -delete
		find -type f -name "*.o" -delete
		find -type f -name "vgcore.*" -delete

fclean: clean
		rm -f $(NAME)
		find -type f -name "*.a" -delete
		find -type f -name "a.out" -delete

re: 	fclean all

.PHONY: all, clean, fclean, re