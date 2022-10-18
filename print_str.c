#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_str - prints a string with a `s` (lower case) specifier
 * @arg: argument
 * Return: number of character printed
 */

int print_str(va_list arg)

{
	int i;

	char *str = va_arg(arg, char*);

	if (str == NULL)
		str = "(null)";
	else if (*str == '\0')
		return (-1);
	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
