/*
** EPITECH PROJECT, 2019
** disp_f1
** File description:
** Display depending on the argument given.
*/

#include <stdarg.h>
#include "my.h"

void disp_c(va_list ap)
{
    my_putchar(va_arg(ap, int));
}

void disp_bigc(va_list ap)
{
    my_putchar(va_arg(ap, unsigned int));
}

void disp_s(va_list ap)
{
    my_putstr(va_arg(ap, char*));
}

void disp_big(va_list ap)
{
    my_putstr(va_arg(ap, unsigned char*));
}
