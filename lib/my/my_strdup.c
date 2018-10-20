/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** Copies the string given as argument
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    int i = 0;
    char *copy = 0;

    copy = malloc((sizeof (char)) * my_strlen(src));

    while (src[i] != '\0') {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}
