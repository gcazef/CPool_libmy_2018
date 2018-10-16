/*
** EPITECH PROJECT, 2018
** my_swap
** File description:
** Swap the content of two integers
*/

void my_swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
