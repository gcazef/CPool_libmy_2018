/*
** EPITECH PROJECT, 2018
** my_putnbr_base
** File description:
** Converts and displays a number to a given base
*/

void my_putchar(char c);

int my_baselen(char const *str)
{
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }
    return (len);
}

int my_putnbr_base(int nbr, char const *base)
{
    int len = my_baselen(base);
    
    if (nbr == 0) {
        return (0);
    }
    else if (nbr < 0) {
        my_putchar('-');
        my_putnbr_base((nbr * (-1)), base);
    } else {
        my_putnbr_base((nbr / len), base);
        my_putchar(base[nbr % len]);
    }
    return (0);
}
