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

if (n < 0)
{
	_putchar('-');
	count++;
	n = -n;
}
if (n == 0)
{
	_putchar('0');
	return (++count);
}
if (n / 10)
	count += print_num_helper(n / 10);

_putchar(n % 10 + '0');
count++;

return (count);
}

/**
 * print_num_helper - a helper function for print num
 *
 * @n: parameter n
 * Return: return int
 */
int print_num_helper(int n)
{
	int count = 0;

	if (n / 10)
		count += print_num_helper(n / 10);
	_putchar(n % 10 + '0');
	count++;

	return (count);
}
