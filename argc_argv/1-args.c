#include "main.h"
#include <stdio.h>

/**
* main - Entry point of the program
* @argc: The number of command-line arguments
* @argv: An array of strings containing the command-line arguments
*
* Return: Always 0
*/

int main(int argc, char *argv[])
{
int i;
printf("Number of arguments: %d\n", argc);

for (i = 0; i < argc; i++)
{
printf("Argument %d: %s\n", i, argv[i]);
}
return (0);
}
