/*
** EPITECH PROJECT, 2018
** my_is_prime
** File description:
** Returns 1 if parameter is prime, 0 if not
*/

int my_is_prime(int nb)
{
    int divider = nb - 1;

    if (nb <= 1) {
        return (0);
    }
    while (divider > 1) {
        if ((nb % divider) == 0) {
            return (0);
        }
        divider--;
    }
    return (1);
}
