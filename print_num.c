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
char buffer[20];
int i = 0;
if (num < 0)
{
_putchar('-');
count++;
num = -num;
}
while (num > 0)
{
buffer[i++] = num % 10 + '0';
num /= 10;
}
if (i == 0)
{
buffer[i++] = '0';
}
while (i > 0)
{
_putchar(buffer[--i]);
count++;
}
return (count);
}
