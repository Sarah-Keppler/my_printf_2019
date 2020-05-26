/*
** EPITECH PROJECT, 2019
** disp_f2
** File description:
** Display depending on the argument given.
*/

#include <stdarg.h>
#include "my.h"

void disp_i(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void disp_d(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void disp_u(va_list ap)
{
    my_put_nbr(va_arg(ap, unsigned int));
}
