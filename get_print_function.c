#include "main.h"

/**
 * get_print_function - selects the correct function to print
 * @c: format specifier
 *
 * Return: function pointer to correct print function, NULL if no match found
 * team work by Taha Eddiani & Omayma zgani
 */
int (*get_print_function(char c))(va_list)
{
	int i;
	print_t print_funcs[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{0, NULL}
	};

	for (i = 0; print_funcs[i].func != NULL; i++)
	{
		if (print_funcs[i].specifier == c)
			return (print_funcs[i].func);
	}

	return (NULL);
}