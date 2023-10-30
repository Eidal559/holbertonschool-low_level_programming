#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number for which to find the square root.
* Return: The natural square root of n. if there no natural square root.
*/

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (find_sqrt(n, 1));
}
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
return guess;
if (guess * guess > n)
return (-1);
return (find_sqrt(n, guess + 1));
}
