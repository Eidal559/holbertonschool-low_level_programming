#include "variadic_functions.h"
#include <stdio.h>

/**
* print_all - Prints anything based on the format provided.
* @format: A string representing the format of the arguments.
*      'c' for char, 'i' for integer, 'f' foe float, 's' for string.
*      Any other character should be ignored.
* @...: The variable arguments to be printed based on the format.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0;
char *separator = "";

va_start(args, format);

while (format != NULL && format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
separator = ", ";
break;
case'i':
printf("%s%d", separator, va_arg(args, int));
separator = ", ";
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
separator = ", ";
break;
case 's':
printf("%s%s", separator, (va_arg(args, char *) ? va_arg(args, char *) : "(nil)"));
separator = ", ";
break;
default:
break;
}
i++;
}
printf("\n");

va_end(args);
}
