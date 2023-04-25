#include "main.h"

/**
 * print_char - prints a character
 * @args: list of arguments
 *
 * Return: number of characters printed
 * team work by Taha Eddiani & Omayma Zgani
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
 * print_decimal - prints a decimal integer
 * @args: list of argumnts
 * Return: number of characters printed
 */
int print_decimal(va_list args)
{
	int num = va_arg(args, int);
	int count = (num < 0) ? 1 : 0;

	if (num < 0)
		num = -num;

	if (num / 10)
		count += print_decimal_aux(num / 10);

	_putchar(num % 10 + '0');
	count++;

	return (count);
}

/**
 * print_decimal_aux - print decimal integer
 * @n: ineger to be printed
 *
 * Return: number of characters printed
 * team work by Taha Eddiani & Omayma Zgani
 */
int print_decimal_aux(int n)
{
	int count = 0;

	if (n / 10)
		count += print_decimal_aux(n / 10);

	_putchar(n % 10 + '0');
	count++;

	return (count);
}
