#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - Prints numbers followed by a new line.
* @separator: The sring to be printed between numbers (or NULL)
* @n: The number of integers passed to the function.
* @...: The integers to e printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);

if (n > 0)
{
printf("%d", va_arg(args, int));

for (i = 1; i < n; ++i)
{
if (separator != NULL)
printf("%s", separator);

printf("%d", va_arg(args, int));
}
}
printf("\n");

va_end(args);
}
