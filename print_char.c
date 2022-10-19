#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_char - writes the character c to stdout
 * @arg: argument.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_char(va_list arg)

{
	return (_putchar(va_arg(arg, int)));
}
