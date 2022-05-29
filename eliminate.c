/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eliminate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:06:14 by zwong             #+#    #+#             */
/*   Updated: 2022/05/29 11:56:04 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	eliminate_row(char board[4][4][5], int index, char to_remove);
void	eliminate_col(char board[4][4][5], int index, char to_remove);
void	insert_field(char board[4][4][5], int index, char to_remove);
char	*ft_strcpy(char *dest, char *src);
char	*remove_char(char *str, char to_remove);

void	eliminate(char board[4][4][5], int index, char to_remove)
{
	eliminate_row(board, index, to_remove);
	eliminate_col(board, index, to_remove);
	insert_field(board, index, to_remove);
}

void	eliminate_row(char board[4][4][5], int index, char to_remove)
{
	int		row_i;
	int		col_i;
	char	*field;

	row_i = index / 4;
	col_i = 0;
	while (col_i < 4)
	{
		field = &*board[row_i][col_i];
		ft_strcpy(field, remove_char(field, to_remove));
		col_i++;
	}
}

void	eliminate_col(char board[4][4][5], int index, char to_remove)
{
	int		row_i;
	int		col_i;
	char	*field;

	row_i = 0;
	col_i = index % 4;
	while (row_i < 4)
	{
		field = &*board[row_i][col_i];
		ft_strcpy(field, remove_char(field, to_remove));
		row_i++;
	}
}

void	insert_field(char board[4][4][5], int index, char to_remove)
{
	int		row_i;
	int		col_i;
	char	str[2];
	char	*field;

	row_i = 0;
	col_i = 0;
	row_i = index / 4;
	col_i = index % 4;
	str[0] = to_remove;
	str[1] = '\0';
	field = &*board[row_i][col_i];
	ft_strcpy(board[row_i][col_i], str);
}
