##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile bsq
##

SRC	=	source/algo_1.c	\
		source/algo_2.c	\
		source/load.c	\
		source/errors_handling.c	\
		source/fill.c	\
		source/open_read_load_map.c	\
		source/mapgen.c	\
		source/my_strcmp.c	\
		source/my_printf/my_putstr.c	\
		source/my_printf/my_strlen.c	\
		source/my_printf/my_strcpy.c	\
		source/my_printf/my_putchar.c	\
		source/my_printf/my_putnbr.c	\
		source/my_printf/my_print_hexa.c	\
		source/my_printf/my_printx.c	\
		source/my_printf/print_p.c	\
		source/my_printf/float.c	\
		source/my_printf/my_putnbu.c	\
		source/my_printf/print_b.c	\
		source/my_printf/print_o.c	\
		source/my_printf/my_printf.c	\
		source/my_printf/my_getnbr.c	\

TST =	source/my_printf/my_strlen.c	\
		source/my_printf/my_putchar.c	\
		source/my_printf/my_putstr.c	\
		source/my_printf/my_putnbr.c	\
		source/my_printf/my_getnbr.c	\
		source/my_printf/my_strcmp.c	\

STST =	tests/test_my_strlen.c	\
		tests/test_my_putstr.c	\
		tests/test_my_getnbr.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):
	@echo "Compiling..."
	@gcc $(SRC) -o $(NAME) -g3
	@echo "Compilation done..."

clean:
	@echo -e "Cleaning up..."
	@rm -f $(OBJ)
	@echo "Cleaning up done :)..."

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

tests_run:	$(OBG)
	@echo -e "Unitest Mode on..."
	@gcc -o unit_tests $(TST) $(STST) --coverage -lcriterion
	./unit_tests
