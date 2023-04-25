#include "main.h"
/**
 * print_num - print number
 * @args: integer printed
 * Return: number
 */
int print_num(va_list args)
{
int n = va_arg(args, int);
int count = 0;
char buffer[17];
int i = 0;
if (n == 0)
{
_putchar('0');
return (1);
}
if (n < 0)
{
_putchar('-');
count++;
n = -n;
}
while (n > 0)
{
buffer[i++] = (n % 10) + '0';
n /= 10;
}
while (i-- > 0)
{
_putchar(buffer[i]);
count++;
}
return (count);
}
