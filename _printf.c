	for (functsIndex = 0; functs[functsIndex].indentifier != NULL; functsIndex++)
	{
		if (functs[functsIndex].indentifier[0] == next)
			return (functs[functsIndex].printer(arg));
	}
	return (0);
}

/**
 * _printf - mimic printf from stdio
 * Description: produces output according to a format
 * write output to stdout, the standard output stream
 * @format: character string composed of zero or more directives
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 * return -1 for incomplete identifier error
 */

int _printf(const char *format, ...)
{
unsigned int i;
int identifierPrinted = 0, char_printed = 0;
va_list arg;
va_start(arg, format);

if (format == NULL)
return (-1);
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
char_printed++;
continue;
}
if (format[i + 1] == '%')
{
_putchar('%');
char_printed++;
i++;
continue;
}
if (format[i + 1] == '\0')
return (-1);
identifierPrinted = printIdentifiers(format[i + 1], arg);
if (identifierPrinted == -1 || identifierPrinted != 0)
i++;
if (identifierPrinted > 0)
char_printed += identifierPrinted;

if (identifierPrinted == 0)
{
_putchar('%');
char_printed++;
}
}
va_end(arg);
return (char_printed);
}
