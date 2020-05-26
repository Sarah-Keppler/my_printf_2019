/*
** EPITECH PROJECT, 2019
** hexadecimalx
** File description:
** Display the octal of an int.
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

void octal(int number)
{
    int digits = nb_of_digits(number);
    int sum = 0;
    int pow_8[8] = {1, 8, 64, 512, 4096, 32768, 262144, 2097152};
    char *nb_str = malloc(sizeof(char) * 9);

    nb_str = my_int_to_str(number, nb_str);
    for (int i = 0; digits > i; ++i)
        sum += (nb_str[i] - 48) * pow_8[digits - 1 - i];
    my_put_nbr(sum);
}
