#include "main.h"
/**
 * print_num - print number
 * @args: integer printed
 * Return: number
 */
int print_num(va_list args)
{
int num = va_arg(args, int);
int count = 0;
if (num < 0)
{
_putchar('-');
count++;
num = -num;
}
if (num / 10)
{
va_list args_copy;
va_copy(args_copy, args);
count += print_num(args_copy);
va_end(args_copy);
}
_putchar(num % 10 + '0');
count++;
return (count);
}
