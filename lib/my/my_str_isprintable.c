/*
** EPITECH PROJECT, 2018
** my_str_isprintable
** File description:
** Checks if string passed as parameter only contains printable characters
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32) {
            return (0);
        }
        i++;
    }
    return (1);
}
