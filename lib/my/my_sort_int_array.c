/*
** EPITECH PROJECT, 2018
** my_sort_int_array
** File description:
** Sorts an int array in ascending order
*/

#include "my.h"

void my_sort(int *case_1, int *case_2)
{
    if (*case_1 > *case_2)
        my_swap(case_1, case_2);
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            my_sort((array + j), (array + i));
        }
    }
    return;
}
