/*
** EPITECH PROJECT, 2019
** disp_f3
** File description:
** Display depending on the argument given.
*/

#include <stdarg.h>
#include "my.h"

void disp_bigx(va_list ap)
{
    hexadecimalbigx(va_arg(ap, int));
}

void disp_x(va_list ap)
{
    hexadecimalx(va_arg(ap, int));
}

void disp_o(va_list ap)
{
    octal(va_arg(ap, int));
}
