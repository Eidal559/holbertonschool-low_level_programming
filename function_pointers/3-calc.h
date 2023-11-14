#ifndef CALC_H
#define CALC_H

/**
* struct op - struct op
*
* @op: The operator
* @f: The function associated
*/
typedef struct op
{
char *op;
int (*f)(int a, int b);
}
op_t;

/* Function prototypes */

/**
* op_add - Adds two integers.
* @a: The first integer.
* @b: The second integer.
*
* Return: The result of the addition.
*/
int op_add(int a, int b);

/**
* op_sub - Subtracts two integers.
* @a: The first integer
* @b: The second integer.
*
* Return: The result of the subtraction.
*/
int op_sub(int a, int b);

/**
* op_mul - Multiplies two integers.
* @a: The first integer
* @b: he second integer
*
* Return: The result of the multiplication.
*/
int op_mul(int a, int b);

/**
* op_div - Divides two integers.
* @a: The firs integer.
* @b: The second integer (non-zero).
*
* Return: The result of the division.
*/
int op_div(int a, int b);

/**
* op_mod - Computes the remainder of the division.
* @a: The first integer
* @b: The second integer (non-zero)
*
* Return: The remainder of the division.
*/
int op_mod(int a, int b);

/**
* get_op_func - Selects the correct function to perform operation.
* @s: The operator passed as an argument to the program.
*
* Return: A pointer to the function that corresponds the operator.
*/
int (*get_op_func(char *s))(int, int);

#endif
