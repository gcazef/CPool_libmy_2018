/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** Reverses a string
*/

#include "my.h"

char *my_revstr(char *str)
{
    char swap;
    int len = my_strlen(str);
    int i = 0;

    while (i < (len / 2)) {
        swap = str[len - i - 1];
        str[len - i - 1] = str[i];
        str[i] = swap;
        i++;
    }
    return (str);
}
