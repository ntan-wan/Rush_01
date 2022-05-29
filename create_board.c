/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:12:04 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/05/29 16:51:35 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	create_board(char **av, char ***board, int nrows, int ncols)
{
	int	i;
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
		while (col < ncols)
		{
			(*board)[row][col] = '0';
			col++;
		}
		row++;
	}
	return (0);
}
