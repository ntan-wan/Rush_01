/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:21:07 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/05/29 16:22:39 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			printf("%d ", (*board)[index_row][index_col])
			index_col++;
		}
		printf("\n");
		index_row++;
	}
}
