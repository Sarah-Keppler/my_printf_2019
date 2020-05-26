/*
** EPITECH PROJECT, 2019
** printf
** File description:
** Do YOUR printf, because this one is allowed
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "include/my.h"

void disp_arg(char flag, va_list ap, int y)
{
    if ('c' == flag)
        my_putchar(va_arg(ap, int));
    if ('C' == flag)
        my_putchar(va_arg(ap, unsigned int));
    if ('s' == flag)
        my_putstr(va_arg(ap, char*));
    if ('S' == flag)
        my_putstr(va_arg(ap, unsigned char*));
    if ('i' == flag || 'd' == flag)
        my_put_nbr(va_arg(ap, int));
    if ('u' == flag)
        my_put_nbr(va_arg(ap, unsigned int));
    if ('x' == flag || 'X' == flag)
        hexadecimalx(va_arg(ap, int));
    if ('o' == flag)
        octal(va_arg(ap, int));
}

void manage_percent(char *src, va_list ap)
{
    int y = 0;

    for (int i = 0; '\0' != src[i]; ++i) {
        if ('%' == src[i] && '%' == src[i + 1]) {
            my_putchar('%');
            ++i;
        }
        else if ('%' == src[i]) {
            disp_arg(src[i + 1], ap, y);
            ++i;
            ++y;
        } else
            my_putchar(src[i]);
    }
}

void my_printf(char *src, ...)
{
    char *flags;
    int nb_percent = 0;
    int y = 0;
    va_list ap;

    va_start(ap, src);
    nb_percent = nb_of_the_char_given(src, '%');
    if (nb_percent)
        manage_percent(src, ap);
    else
        for (int i = 0; '\0' != src[i]; ++i)
            my_putchar(src[i]);
    va_end(ap);
}
