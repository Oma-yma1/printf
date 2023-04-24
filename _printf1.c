#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * _printf1 - format specifiers i and d
 * @format: pointer
 * Return: number printed
 * team work by taha and omayma
 */
int _printf1(const char *format, ...)
{
int count = 0;
int i, num;
va_list arg;
if (format == NULL)
return (-1);
va_start(arg, format);
for (i = 0; *format != '\0'; i++)
{
if (*format == '%')
{
i++;
if (*format == 'd' || *format == 'i')
{
num = va_arg(arg, int);
count += print_num(num);
}
}
else
{
_putchar(*format);
count++;
}
}
va_end(arg);
return (count);
}
