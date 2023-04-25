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
char *buffer;
int i = 0;
int temp = num;
if (num < 0
		)
{
_putchar('-');
count++;
num = -num;
}
while (temp > 0)
{
temp /= 10;
i++;
}
buffer = malloc(i + 1);
if (!buffer)
{
return (-1);
}
i = 0;
while (num > 0)
{
buffer[i++] = num % 10 + '0';
num /= 10;
}
if (i == 0)
{
buffer[i++] = '0';
}
while (i-- > 0)
{
_putchar(buffer[i]);
count++;
}
free(buffer);
return (count);
}
