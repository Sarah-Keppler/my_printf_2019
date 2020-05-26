/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** Header for ping pong ! Ping.. Pong.. ping .. pong
*/

#ifndef MY_H_
#define MY_H_

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
void my_printf(char *src, ...);
int nb_of_the_char_given(char *src, char c);
int nb_of_digits(int);
void hexa(char *);
int octal(char *);

#endif /* MY_H_ */
