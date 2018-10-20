##
## EPITECH PROJECT, 2018
## Makefile for libmy.a
## File description:
## Provides rules for compiling libmy.a
##

SRC_FILES = 	concat_params.c\
		my_compute_power_rec.c\
		my_compute_square_root.c\
		my_find_prime_sup.c\
		my_getnbr.c\
		my_isneg.c\
		my_is_prime.c\
		my_putchar.c\
		my_put_nbr.c\
		my_putnbr_base.c\
		my_putstr.c\
		my_revstr.c\
		my_showmem.c\
		my_showstr.c\
		my_show_word_array.c\
		my_sort_int_array.c\
		my_strcapitalize.c\
		my_strcat.c\
		my_strcmp.c\
		my_strcpy.c\
		my_strdup.c\
		my_str_isalpha.c\
		my_str_islower.c\
		my_str_isnum.c\
		my_str_isprintable.c\
		my_str_isupper.c\
		my_strlen.c\
		my_strlowcase.c\
		my_strncat.c\
		my_strncmp.c\
		my_strncpy.c\
		my_strstr.c\
		my_str_to_word_array.c\
		my_strupcase.c\
		my_swap.c\

SRC_DIR = lib/my/

SRC = $(addprefix $(SRC_DIR), $(SRC_FILES))

CC = gcc

CFLAGS = -W -Wall -Wextra -Wunused -I include

NAME = lib/my/libmy.a

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
