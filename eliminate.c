void	eliminate_row(char board[4][4][5], int pos_row, int size, char to_remove);
void	eliminate_col(char board[4][4][5], int pos_col, int size, char to_remove);
char	*ft_strcpy(char *dest, char *src);
char	*remove_char(char *str, char to_remove);

void	eliminate(char board[4][4][5], int pos_row, int pos_col, int size, char to_remove)
{
	int	row_i;
	int	col_i;

	row_i = 0;
	col_i = 0;

	eliminate_row(board, pos_row, size, to_remove);
	eliminate_col(board, pos_col, size, to_remove);
}

void	eliminate_row(char board[4][4][5], int pos_row, int size, char to_remove)
{
	int row_i;
	int	col_i;

	row_i = pos_row;
	col_i = 0;
	while (col_i < size)
	{
		ft_strcpy(board[row_i][col_i], remove_char(board[row_i][col_i], to_remove));
		col_i++;
	}
}

void	eliminate_col(char board[4][4][5], int pos_col, int size, char to_remove)
{
	int row_i;
	int	col_i;

	row_i = 0;
	col_i = pos_col;
	while (row_i < size)
	{
		ft_strcpy(board[row_i][col_i], remove_char(board[row_i][col_i], to_remove));
		row_i++;
	}
}
