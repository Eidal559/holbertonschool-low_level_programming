#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array of strings containing the command-line argumments
*
* Return: 0 if successful, 1 if there is an error
*/

int main(int argc, char *argv[])
{
int sum = 0;
bool error = false;
int i, j, num;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
error = true;
break;
}
}
if (error)
{
printf("Error\n");
return (1);
}
num = atoi(argv[i]);
if (num < 0)
{
printf("Error\n");
return (1);
}
sum += num;
}
printf("%d\n", sum);
return (0);
}
