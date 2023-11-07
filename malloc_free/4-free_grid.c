#include "main.h"
#include <stdlib.h>

/**
* free_grid - Free a 2-dimensional grid previously created by alloc-grid.
* @grid: The grid to be freed.
* @height: The height (number of rows) of the grid.
*/

void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;

for (i = 0; i < height; i++)
{
if (grid[i] != NULL)
{
free(grid[i]);
grid[i] = NULL;
}
}
free(grid);
}
