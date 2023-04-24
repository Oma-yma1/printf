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
int n = num;
int dig = 0;
int div = 1;
int digit;
int i, j;
if (num < 0)
{
_putchar('-');
count++;
num = -num;
}
while (n > 0)
{
dig++;
n /= 10;
}
for (i = dig - 1; i >= 0; i--)
{
for (j = 0; j < i; j++)
{
div *= 10;
}
digit = num / div % 10;
_putchar(digit + '0');
count++;
}
return (count);
}
