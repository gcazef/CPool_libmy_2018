/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** Counts the number of characters of a string
*/

int my_strlen(char const *str)
{
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }
    return (len);
}
