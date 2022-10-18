#include "main.h"
#include <stdio.h>
#include <stdarg>
#include <stdio.h>



/**
 * printIdentifiers - prints special characters
 * @next: character after the %
 * @arg: argument for the indentifier
 * Return: the number of characters printed
 **/

int printIdentifiers(char next, va_list arg)

{

int functsIndex;
identifierStruct functs[] = {
{"c", print_char},
{"s", print_str},
{"d", print_int},
{"i", print_int},
{"u", print_unsigned},
{"b", print_unsignedToBinary},
{"o", print_oct},
{"x", print_hex},
{"X", print_HEX}
{"S", print_STR},
{NULL, NULL}
};
