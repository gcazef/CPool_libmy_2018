/*
** EPITECH PROJECT, 2018
** concat_params
** File description:
** Turns command line args into one string
*/

#include <stdlib.h>

int get_param_len(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int len = 0;

    while (i < ac) {
        j = 0;
        while (av[i][j] != '\0') {
            len++;
            j++;
        }
        i++;
    }
    return (len);
}

char *concat_params(int argc, char **argv)
{
    int len = get_param_len(argc, argv) + argc - 1;
    char *concat = malloc(len * sizeof (char));
    int i = 0;
    int j = 0;
    int m = 0;

    while (i < argc) {
        j = 0;
        while (argv[i][j] != '\0') {
            concat[m] = argv[i][j];
            j++;
            m++;
        }
        i++;
        if (m < len) {
            concat[m] = '\n';
            m++;
        }
    }
    concat[m] = '\0';
    return (concat);
}
