#include "main.h"
#include <stdio.h>

/**
* is_divisible - Helper function to check if n is divisible by divisor.
* @n: The number to check for divisibility.
* @divisor: The divisor to check.
* Return: 1 if n is divisible by divisor, 0 otherwise.
*/

int is_divisible(int n, int divisor)
{
if (divisor == 1)
return (0);

if (n % divisor == 0)
return (1);

if (divisor * divisor > n)
return (0);

return (is_divisible(n, divisor + 1));
}

/**
* is_prime_number - Checks if an integer is a prime number.
* @n: The integer to check for primality.
* Return: 1 if n is a prime number, othewise 0.
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);

if (n <= 3)
return (1);

return (!is_divisible(n, 2));
}
