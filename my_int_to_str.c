/*
** EPITECH PROJECT, 2019
** my_int_to_str
** File description:
** Transform an int to a str.
*/

#include "my.h"

char *my_int_to_str(int result, char *str)
{
    int f = 0;
    int figure;

    while (result != 0) {
        figure = result % 10;
        result /= 10;
        str[f] = figure + 48;
        str[f + 1] = '\0';
        ++f;
    }
    str = my_revstr(str);
    return (str);
}
