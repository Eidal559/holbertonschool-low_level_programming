#include "3-function_like_macro.h"
#include <stdio.h>

/**
* main - Entry point
*
* Description: Uses the ABS macro to compute and print
* the absolute values of -98 and 98.
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i;
int j;

i = ABS(-98) * 10;
j = ABS(98) * 10;
printf("%d, %d\n", i, j);
return (0);
}
