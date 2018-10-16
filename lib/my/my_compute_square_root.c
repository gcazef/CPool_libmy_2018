/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** Returns the square root of number given as argument
*/

int my_compute_square_root(int nb)
{
    int square_root = 1;

    if (nb < 1) {
        return (0);
    }
    else if (nb == 1) {
        return (1);
    }
    while (square_root < nb) {
        if ((square_root * square_root) == nb) {
            return (square_root);
        }
        square_root++;
    }
    return (0);
}
