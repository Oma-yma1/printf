#include "main.h"
/**
 * print_num - print number
 * @n: integer printed
 * Return: number
 */
int print_num(int n)
{
int count = 0;
if (n < 0)
{
_putchar('-');
count++;
n = -n;
}
if (n / 10)
count += print_num(n / 10);
_putchar((n % 10) + '0');
count++;
return (count);
}
