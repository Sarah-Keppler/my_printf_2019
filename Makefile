##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Make(haha) your own lib !!!!
##

SRC	=	my_putchar.c		\
		my_put_nbr.c		\
		my_swap_char.c		\
		my_putstr.c		\
		my_strlen.c		\
		my_getnbr.c		\
		my_revstr.c		\
		my_strcat.c		\
		octal.c			\
		hexadecimalx.c		\
		hexadecimalbigx.c		\
		my_int_to_str.c		\
		number.c		\
		disp_f1.c		\
		disp_f2.c		\
		disp_f3.c		\
		my_printf.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h include/
	cp $(NAME) ../

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
