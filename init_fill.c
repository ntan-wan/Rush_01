/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_fill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 11:09:52 by zwong             #+#    #+#             */
/*   Updated: 2022/05/29 11:09:53 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

void	init_fill(char board[4][4][5], int size)
{
	int		row_i;
	int		col_i;
	int		index;

	row_i = 0;
	col_i = 0;
	index = 0;
	while (index < size * size)
	{
		row_i = index / size;
		col_i = index % size;
		ft_strcpy(board[row_i][col_i], "1234");
		index++;
	}
}
