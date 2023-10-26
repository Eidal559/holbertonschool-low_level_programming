#include "main.h"
#include <stdio.h>

/**
* print_chessboard - Prints a chessboard with chess piece positions.
*
*/
void print_chessboard(char (*a)[8])
{
char chessboard[8][8] = {
{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
};
int i;
int j;
printf(" a b c d e f g h\n");
for (i = 0; i < 8; i++)
{
printf("%d ", 8 - i);
{
for (j = 0; j < 8; j++)
{
printf("%c ", chessboard[i][j]);
}
printf("%d\n", 8 - i);
}
printf(" a b c d e f g h\n");
}
}
