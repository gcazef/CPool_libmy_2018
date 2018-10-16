/*
** EPITECH PROJECT, 2018
** my_strcmp
** File description:
** Compares two strings
*/

int get_str_value(char const *str)
{
    int i = 0;
    int value = 0;
    
    while (str[i] != '\0') {
        value += str[i];
        i++;
    }
    return (value);
}

int my_strcmp(char const *s1, char const *s2)
{
    int s1_value = 0;
    int s2_value = 0;

    s1_value = get_str_value(s1);
    s2_value = get_str_value(s2);

    if (s1_value < s2_value) {
        return (s1_value - s2_value);
    }
    else if (s1_value > s2_value) {
        return (s1_value - s2_value);
    } else {
        return (0);
    }
}
