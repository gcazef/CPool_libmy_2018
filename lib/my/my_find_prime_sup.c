/*
** EPITECH PROJECT, 2018
** my_prime_find_sup
** File description:
** Returns smallest sup or eq prime number
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    while (nb < 2147483647) {
        if (my_is_prime(nb)) {
            return (nb);
        }
        nb++;
    }
    return (0);
}
