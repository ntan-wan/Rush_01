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
