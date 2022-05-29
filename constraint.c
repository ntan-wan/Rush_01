/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchan <pchan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:05:02 by pchan             #+#    #+#             */
/*   Updated: 2022/05/29 18:50:07 by pchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	*edgerowcol(int count)
{
	int	arr[2];

	if (count >= 0 && count <= 3)
	{
		arr[0] = 0;
		arr[1] = count % 4;
	}
	if (count >= 4 && count <= 7)
	{
		arr[0] = 3;
		arr[1] = count % 4;
	}	
	if (count >= 8 && count <= 11)
	{
		arr[0] = count % 4;
		arr[1] = 0;
	}
	if (count >= 12 && count <= 15)
	{
		arr[0] = count % 4;
		arr[1] = 3;
	}
	return (arr);
}

void	countequalfour(int count)
{
	int		row;
	int		col;
	int		num;
	char	str [2];

	if (count >= 0 && count <= 3)
	{
		row = 0;
		col = count;
		num = 1;
		while (row < 4)
		{
			str[0] = num + '0';
			str[1] = '\0';
			ft_strcpy(board[row][col], str);
			row++;
			num++;
		}
	}
	if (count >= 4 && count <= 7)
	{
		row = 3;
		col = count % 4;
		num = 4;
		while (row < 4)
		{
			str[0] = num + '0';
			str[1] = '\0';
			ft_strcpy(board[row][col], str);
			row--;
			num--;
		}
	}
	if (count >= 8 && count <= 11)
	{
		row = count % 4;
		col = 0;
		num = 1;
		while (col < 4)
		{
			str[0] = num + '0';
			str[1] = '\0';
			ft_strcpy(board[row][col], str);
			col++;
			num++;
		}
	}
	if (count >= 12 && count <= 15)
	{
		row = count % 4;
		col = 3;
		num = 4;
		while (col < 4)
		{
			str[0] = num + '0';
			str[1] = '\0';
			ft_strcpy(board[row][col], str);
			col--;
			num--;
		}
	}
}

void	constraint(char edge_array[16], char board[4][4][5])
{
	int	count;

	count = 0;
	row = 0;
	col = 0;
	while (count < 16)
	{
		int	*result;

		result = edgerowcol(count);
		row = result[0];
		col = result[1];
		if (edge_array[count] == '1')
		{
			ft_strcpy(board[row][col], "4");
		}
		if (edge_array[count] == '4')
		{
			countequalfour(count);
		}
		if (edge_array[count] == '3')
		{
			ft_strcpy(board[row][col], "12");
		}
		if (edge_array[count] == '2')
		{
			ft_strcpy(board[row][col], "123");
		}
		count++;
	}
}
