#include "1-pi.h"
#include <stdio.h>

/**
* main - Entry point
*
* Description: Calculates and prints the area of a cricle
* with a given radius using the PI macro.
*
* Return: Always 0 (Success)
*/

int main(void)
{
float a;
float r;

r = 98;
a = PI * r * r;
printf("%.3f\n", a);
return (0);
}
