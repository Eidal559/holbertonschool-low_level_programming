#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Allocate a 2-dimensional array of integers and initialize.
* @width: The width (number of columns) of the grid.
* @height: The height (numberof rows) of the grid.
*
* Return: if width or height is 0 or negative, or if memory allocation fails.
*        Otherwise, return a pointer to the allocated grid.
*/

int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
