/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** Finds a number in a string
*/

int extract_nbr(char const *str, int pos)
{
    int res = 0;
    int const max_int = 2147483647;

    while ((str[pos] >= '0') && (str[pos] <= '9')) {
        if ((max_int - res) > (str[pos] - '0')) {
            res *= 10;
            res = res + (str[pos] - '0');
            pos++;
        } else {
            return (0);
        }
    }
    return (res);
}

int my_getnbr(char const *str)
{
    int nbr = 0;
    int i = 0;
    int sign = 1;

    while (str[i] != '\0') {
        if (str[i] == '-') {
            sign = sign * (-1);
        }
        if (str[i] == '+') {
            sign = sign;
        }
        if ((str[i] >= '0') && (str[i] <= '9')) {
            nbr = extract_nbr(str, i);
            break;
        } else {
            return (0);
        }
        i++;
    }
    return (sign * nbr);
}
