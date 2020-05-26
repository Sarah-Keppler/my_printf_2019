/*
** EPITECH PROJECT, 2019
** hexadecimalx
** File description:
** Display the hexadecimal(min letters) of an int.
*/

#include <stdio.h>
#include "my.h"

void disp_hexadecimalx(int *hex, int digits, int nb)
{
    for (int i = 0; digits - 1 > i; ++i) {
        if (10 <= hex[i])
            my_putchar(hex[i] + 48 + 39);
        else
            my_put_nbr(hex[i]);
    }
    if (10 <= nb)
        my_putchar(nb + 48 + 39);
    else
        my_put_nbr(nb);
}

void hexadecimalx(int nb)
{
    int digits = nb_of_digits(nb);
    int div = 0;
    int i = 0;
    int pow_16[8] = {1, 16, 256, 4096, 65535, 1048576};
    int hex[digits];

    if (nb <= 15)
        my_put_nbr(nb);
    while (!(0 <= nb &&  15 >= nb)) {
        for (int i = 0; digits > i; ++i)
            if (nb > pow_16[i])
                div = pow_16[i];
        hex[i] = nb / div;
        nb = nb - (hex[i] * div);
        ++i;
    }
}
