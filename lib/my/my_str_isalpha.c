/*
** EPITECH PROJECT, 2018
** my_str_isalpha
** File description:
** Finds if the string passed as parameter contains alpha char
*/

int is_lower_letter_2(char c)
{
    if ((c >= 'a') && (c <= 'z')) {
        return (1);
    } else {
        return (0);
    }
}

int is_upper_letter_2(char c)
{
    if ((c >= 'A') && (c <= 'Z')) {
        return (1);
    } else {
        return (0);
    }
}

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((!is_upper_letter_2(str[i])) && (!is_lower_letter_2(str[i]))) {
            return (0);
        }
        i++;
    }
    return (1);
}
