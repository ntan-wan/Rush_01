#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

void	init_fill(char *board[4][4][5], int row_size, int col_size)
{
	int		row_i;
	int		col_i;

	row_i = 0;
	col_i = 0;
	while (row_i < row_size)
	{
		col_i = 0;
		while (col_i < col_size)
		{
			ft_strcpy(board[row_i][col_i], "1234");
			//printf("Copied this: %s\n", board[row_i][col_i]);
			col_i++;
		}
		row_i++;
	}
}
