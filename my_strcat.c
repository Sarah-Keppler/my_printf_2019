/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** for the library
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int di = my_strlen(dest);

    while ('\0' != src[i]) {
        dest[di] = src[i];
        ++di;
        ++i;
    }
    dest[di] = '\0';
    return (dest);
}
