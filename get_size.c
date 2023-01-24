#include "main.h"
/**
 * get_size - Extracts and returns the size specifier
 * *present in the format string.
 * @format: Format string containing size specifiers and other characters
 * @i: Index in the format string to start parsing from
 * Return: Integer representing the size specifier that is active
 */
int get_size(const char *format, int *i)
{
int size = 0;
if (format[*i] == 'h' && format[*i + 1] != 'h')
size = 1;
else if (format[*i] == 'h' && format[*i + 1] == 'h')
{
size = 2;
(*i)++;
}
else if (format[*i] == 'l' && format[*i + 1] != 'l')
size = 3;
else if (format[*i] == 'l' && format[*i + 1] == 'l')
{
size = 4;
(*i)++;
}
if (size)
(*i)++;
return (size);
}
