#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* op_add - Returns the sum of a and b.
* @a: The first integer.
* @b: The second integer.
*
* Return: The result of the addition.
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - Returns the difference of a and b.
* @a: The first integer.
* @b: The second integer.
*
* Return: The result of the subtraction.
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - Returns the product of a and b.
* @a: The first integer
* @b: The second integer.
*
* Return: The result of the multiplication.
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - Returns the result of the division of a by b.
* @a: The first integer
* @b: The second integer.
*
* Return: The result of the division.
*/
int op_div(int a, int b)
{
if (b != 0)
return (a / b);

printf("Error: cannot divide by zero\n");
exit(EXIT_FAILURE);
}

/**
* op_mod - Returns the remainder of the division of a by b.
* @a: The first integer
* @b: The second integer.
*
* Return: The remainder of the division.
*/
int op_mod(int a, int b)
{
if (b != 0)
return (a % b);

printf("Error: Cannot divide by zero\n");
exit(EXIT_FAILURE);
}
