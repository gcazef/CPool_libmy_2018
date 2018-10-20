/*
** EPITECH PROJECT, 2018
** my_str_to_word_array
** File description:
** Splits string into words
*/

#include <stdlib.h>
#include "my.h"

int is_alphanum(char c)
{
    if ((c >= '0') && (c <= '9')) {
        return (1);
    }
    else if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))) {
        return (1);
    } else {
        return (0);
    }
}

int my_wordcount(char const *str)
{
    int i = 0;
    int nb_words = 0;

    if (my_strlen(str) == 0) {
        return (0);
    }
    while (str[i] != '\0') {
        if (is_alphanum(str[i]) && !(is_alphanum(str[i + 1]))) {
            nb_words += 1;
        }
        i++;
    }
    return (nb_words);
}

char *alloc_word(char const *str, int start, int end)
{
    int i = 0;
    int len = end - start;
    char *res = malloc(sizeof(char) * len);

    if (!res) {
        return (0);
    }
    while (i < len) {
        res[i] = str[start + i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int j = 0;
    char **word_arr = malloc((my_wordcount(str) + 1) * sizeof(char*));
    int w_start = -1;

    if (!word_arr) {
        return (0);
    }
    while (i <= my_strlen(str)) {
        if (is_alphanum(str[i]) && (w_start == -1)) {
            w_start = i;
        }
        else if (!is_alphanum(str[i]) && (w_start != -1)) {
            word_arr[j] = alloc_word(str, w_start, i);
            j++;
            w_start = -1;
        }
        i++;
    }
    word_arr[j] = 0;
    return (word_arr);
}
