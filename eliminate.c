void	eliminate_row(char board[4][4][5], int index, char to_remove);
void	eliminate_col(char board[4][4][5], int index, char to_remove);
char	*ft_strcpy(char *dest, char *src);
char	*remove_char(char *str, char to_remove);

void	eliminate(char board[4][4][5], int index, char to_remove)
{
	eliminate_row(board, index, to_remove);
	eliminate_col(board, index, to_remove);
}

void	eliminate_row(char board[4][4][5], int index, char to_remove)
{
	int 	row_i;
	int		col_i;
	char	*field;

	row_i = index / 4;
	col_i = 0;
	while (col_i < 4)
	{
		field = &*board[row_i][col_i];
		ft_strcpy(field, remove_char(board[row_i][col_i], to_remove));
		col_i++;
	}
}

void	eliminate_col(char board[4][4][5], int index, char to_remove)
{
	int 	row_i;
	int		col_i;
	char	*field;

	row_i = 0;
	col_i = index % 4;
	while (row_i < 4)
	{
		field = &*board[row_i][col_i];
		ft_strcpy(board[row_i][col_i], remove_char(board[row_i][col_i], to_remove));
		row_i++;
	}
}
