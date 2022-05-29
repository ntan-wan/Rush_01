#include <stdio.h>
#include <stdlib.h>

int malloc2d(char **av, int *** board, int nrows, int ncols,)
{
    int i;
	int	row;
	int	col;

	i = 0;
    *board = malloc(sizeof(int *) * nrows);
	 while (i < nrows)
	{
		(*board)[i] = malloc(sizeof(int) * ncols);
		i++;
	}
	row = 0;
	while (row < nrows)
	{	
		col = 0;
		while ( col < ncols)
		{
			(*board)[row][col] = 0;
			col++;
		}
		row++;
	}
    return 0;
}

int main(int argc, char ** argv)
{
    int ** grid;
	int index_row;
	int	index_col;

    malloc2d(&grid, 4, 4);
	index_row = 0;
	while ( index_row < 4)
	{	
		index_col = 0;
		while (index_col < 4)
		{
			printf("%d ", grid[index_row][index_col]);
			index_col++;
		}
		printf("\n");
		index_row++;
	}
    return 0;
}
