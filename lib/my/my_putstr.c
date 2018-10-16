/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** Displays characters of a string
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
    int len = my_strlen(str);

    write(1, str, len);
    return (0);
}
