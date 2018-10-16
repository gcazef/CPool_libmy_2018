/*
** EPITECH PROJECT, 2018
** my_strncmp
** File description:
** Compares the first n bytes of two strings
*/

int get_str_n_value(char const *str, int n)
{
    int i = 0;
    int value = 0;

    while (i < n) {
        value += str[i];
        i++;
    }
    return (value);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int s1_value = 0;
    int s2_value = 0;

    s1_value = get_str_n_value(s1, n);
    s2_value = get_str_n_value(s2, n);

    if (s1_value < s2_value) {
        return (s1_value - s2_value);
    }
    else if (s1_value > s2_value) {
	return (s1_value - s2_value);
    } else {
        return (0);
    }
}
