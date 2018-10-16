/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** Copies n characters from a string to a copy
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int len = my_strlen(dest);

    while (src[i] != '\0') {
        if (i < n) {
            dest[i] = src[i];
        } else {
            i++;
            break;
        }
        i++;
    }
    if (n > len) {
        dest[i] = '\0';
    }
    return (dest);
}
