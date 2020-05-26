/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** Header for ping pong ! Ping.. Pong.. ping .. pong
*/

#ifndef MY_H_
#define MY_H_
#include <stdarg.h>

//Display
void my_putchar(char);
int my_putstr(char const *);
int my_put_nbr(int);
int display_digits(int);

//String
int my_strlen(char const *);
char *my_revstr(char *);
int match(char *, char const *);
char *my_strcat(char *, char const *);

//Others functions
int my_getnbr(char const *);
int my_str_character(char const *);
int my_strlen_per(char const *, char);
void my_swap_char(char *, char *);

//Printf
//void my_printf(char *src, ...);
void my_printf(char *, ...);
int nb_of_the_char_given(char *, char);
int nb_of_digits(int);
char *my_int_to_str(int, char *);
void hexadecimalx(int);
void disp_hexadecimalx(int *, int, int);
void hexadecimalbigx(int);
void disp_hexadecimalbigx(int *, int, int);
void octal(int);
void disp_c(va_list);
void disp_bigc(va_list);
void disp_s(va_list);
void disp_bigS(va_list);
void disp_i(va_list);
void disp_d(va_list);
void disp_u(va_list);
void disp_x(va_list);
void disp_bigx(va_list);
void disp_o(va_list);

#endif /* MY_H_ */
