/*
** EPITECH PROJECT, 2018
** my_strncat
** File description:
** Concatenates a string with the first n bytes of the second
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int d_len = my_strlen(dest);
    int i = 0;

    while ((src[i] != '\0') && (i < nb)) {
        dest[d_len + i] = src[i];
        i++;
    }
    dest[d_len + i] = '\0';
    return (dest);
}
