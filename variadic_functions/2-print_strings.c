#include "variadic_functions.h"
#include <stdio.h>

/**
* print_string - Prints strings followed by a new line.
* @separator: The string to be printed between strings (or NULL)
* @n: The number of strings passed to the function.
* @...: The strings to be printed.
* Description: This function takes a variable number of strings
* and prints them with the specified separator between them.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);

for (i = 0; i < n; ++i)
{
char *str = va_arg(args,  char *);

if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");

va_end(args);
}
