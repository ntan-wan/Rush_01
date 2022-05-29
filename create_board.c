/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:12:04 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/05/29 18:48:02 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	create_board(char **av, char ****board, int nrows, int ncols)
{
	int	i;
	int	row;
	int	col;
	int j;
	int k;

	i = 0;
	k = 0;
	**board = malloc(sizeof(int *) * nrows);
	while (i < nrows)
	{
		(**board)[i] = malloc(sizeof(int) * ncols);
		i++;
	}
	while (j < nrows)
	{
		j = 0;
		while (k < nrows)
		{
			board[j][k] = malloc(sizeof(char) * 5);
			k++;	
		}
		j++;
	}
	row = 0;
	while (row < nrows)
	{	
		col = 0;
		while (col < ncols)
		{
			(**board)[row][col] = '0';
			col++;
		}
		row++;
	}
	return (0);
}
