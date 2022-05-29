#include <stdio.h>

void	print_board(int ***board, int nrows, int ncols)
{
	int	index_row;
	int	index_col;
	
	index_row = 0;
	while (index_row < nrows)
	{
		index_col = 0;
		while (index_col < ncols)
		{
			printf("%d ",(*board)[index_row][index_col])
			index_col++;
		}
		printf("\n");
		index_row++;
	}
}
