#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of the program
* @ac: Argument count
* @av: Argument vector
*
* Return: Always 0.
*/
int main(int ac, char **av)
{
int res;

if (ac != 3)
{
dprintf(2, "Usage: %s filename text\n", av[0]);
exit(1);
}

res = append_text_to_file(av[1], av[2]);
if (res == 1)
{
printf("1\n");
}
else
{
printf("-1\n");
}

return (0);
}
