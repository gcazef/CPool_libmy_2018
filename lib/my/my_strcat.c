/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** Concatenates two strings
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int d_len = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0') {
        dest[d_len + i] = src[i];
        i++;
    }
    dest[d_len + i] = '\0';
    return (dest);
}
