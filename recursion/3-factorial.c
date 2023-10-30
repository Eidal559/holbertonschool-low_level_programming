#include "main.h"
#include <stdio.h>

/**
* factorial - Returns the factorial of a nummber.
* @n: The number for which to compute the factorial.
* Return: the factorial of n. if n is less than 0, returns -1.
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
