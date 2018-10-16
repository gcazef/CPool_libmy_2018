/*
** EPITECH PROJECT, 2018
** my_sort_int_array
** File description:
** Sorts an int array in ascending order
*/

#include "my.h"

int my_sort(int *case_1, int *case_2)
{
    if (*case_1 > *case_2) {
        my_swap(case_1, case_2);
        return (1);
    } else {
        return (0);
    }
}

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int modified = 1;

    while (modified == 1) {
        i = 0;
        while (i < (size - 1)) {
            modified = my_sort((array + i), (array + i + 1));
            i++;
        }
    }
    return;
}
