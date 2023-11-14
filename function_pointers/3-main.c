#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - Entry point.
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument string.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(EXIT_FAILURE);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

operation = get_op_func(argv[2]);

if (operation == NULL)
{
printf("Error\n");
exit(EXIT_FAILURE);
}
result = operation(num1, num2);
printf("%d\n", result);

return (0);
}
