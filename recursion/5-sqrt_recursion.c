#include "main.h"
#include <stdio.h>

int find_sqrt(int n, int guess);

/**
* _sqrt_recursion - Calculates the square root of a number using a recursive algorith.
* @n: The number for which to find the square root.
*
* Return : The square root of n, if its a perfect square, or -1 if not found.
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);

return (find_sqrt(n, 1));
}

/**
* find_sqrt - Helper function to find the square root recursively.
* @n: The number for which to find the square root.
* guess: The current guess for the square root.
*
* Return: The square root of n, or -1 if not found.
*/
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);

return (find_sqrt(n, guess + 1));
}
