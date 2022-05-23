#include <stdio.h>
#include "main.h"

/**
* printf - picks up the right function to print.
* @format: format identifier.
* Return: string length.
*/

int _printf(const char * const format, ...)
{
list_formats my_formats[] = {
{"%s", prints_the_strings}, {"%c", prints_char}, {"%", prints_function_1}
};

va_list args;
int i = 0; j, len = 0;

va_start(args, format);
if(format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

}
