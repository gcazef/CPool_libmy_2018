/*
** EPITECH PROJECT, 2018
** my_strcapitalize
** File description:
** Capitalize the first letter of each word
*/

int is_lower_letter(char c)
{
    if ((c >= 'a') && (c <= 'z')) {
        return (1);
    } else {
        return (0);
    }
}

int is_upper_letter(char c)
{
    if ((c >= 'A') && (c <= 'Z')) {
        return (1);
    } else {
        return (0);
    }
}

int is_number(char c)
{
    if ((c >= '0') && (c <= '9')) {
        return (1);
    } else {
        return (0);
    }
}

int is_not_alpha(char c)
{
    if (is_lower_letter(c) || is_upper_letter(c) || is_number(c)) {
        return (0);
    } else {
        return (1);
    }
}

char *my_strcapitalize(char *str)
{
    int i = 1;

    if ((str[0] >= 'a') && (str[0] <= 'z')) {
        str[0] -= 32;
    }
    while (str[i] != 0) {
        if (is_upper_letter(str [i]) && is_number(str[i - 1]))
            str[i] += 32;
        if (is_lower_letter(str[i]) && is_not_alpha(str[i - 1]))
            str[i] -= 32;
        if (is_upper_letter(str[i]) && is_lower_letter(str[i - 1]))
            str[i] += 32;
        if (is_upper_letter(str[i]) && is_upper_letter(str[i - 1]))
            str[i] += 32;
        i++;
    }
    return (str);
}
