#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_func - define function
 * team work by Taha Eddiani & Omayma Zgani
 * @specifier: character spicifier
 * @func: pointer
 */

typedef struct print_func
{
	char specifier;
	int (*func)(va_list);
}
print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_print_function(char c))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_num(int n);
int _printf1(const char *format, ...);
#endif
