/*
** EPITECH PROJECT, 2018
** my_strupcase
** File description:
** Turns a string into uppercase
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 'a') && (str[i] <= 'z')) {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}