#include "main.h"
#include <stdio.h>

/**
* print_chessboard - Prints a chessboard represented as a 2d array of characters.
*
* @a: The 8x8 chessboard represented as a 2d character array.
*/
void print_chessboard(char a[8][8])
{
int i;
int j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c ", a[i][j]);
}
printf("\n");
}
}
