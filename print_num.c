#include "main.h"
/**
 * print_num - print number
 * @n: integer printed
 * Return: number
 */
int print_num(int n)
{
int count = 0;
int div = 1;
if (n < 0)
{
_putchar('-');
n = -n;
count++;
}
while (div <= n / 10)
{
div *= 10;
}
do {
char digit = '0' + n / div;
_putchar(digit);
n %= div;
div /= 10;
count++;
} while (div > 0);
return (count);
}
