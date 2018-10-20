/*
** EPITECH PROJECT, 2018
** my_str_islower
** File description:
** Tests if string contains only lowercase
*/

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] < 'a') || (str[i] > 'z')) {
            return (0);
        }
        i++;
    }
    return (1);
}
