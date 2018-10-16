/*
** EPITECH PROJECT, 2018
** my_strstr
** File description:
** Find the first occurency of substring to_find inside str
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    char *found = 0;

    while (str[i] != '\0') {
        if (str[i] == to_find[0]) {
            found = &str[i];
            break;
        }
        i++;
    }
    while (to_find[j] != '\0') {
        if (str[i + j] != to_find[j]) {
            found = 0;
        }
        j++;
    }
    return (found);
}
