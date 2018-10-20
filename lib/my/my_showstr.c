/*
** EPITECH PROJECT, 2018
** my_showstr
** File description:
** Prints non-printable hexadecimally
*/

#include "my.h"

void my_add_zero(char c)
{
    if (c < 16)
        my_put_nbr(0);
}

int my_showstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 32)
            my_putchar(str[i]);
        else {
            my_putchar('\\');
            my_add_zero(str[i]);
            my_putnbr_base(str[i], "0123456789abcdef");
        }
        i++;
    }
    return (0);
}
