/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:51:40 by zwong             #+#    #+#             */
/*   Updated: 2022/05/29 18:28:03 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	input_validation(int argc, char **argv, char *input_array)
{
	int		counter;
	int		input_count;
	char	input_char;

	counter = 0;
	input_count = 0;
	if (argc != 2)
		return (0);
	while (argv[1][counter] != '\0')
	{
		input_char = argv[1][counter];
		if (input_char >= '0' && input_char <= '9')
		{
			input_array[input_count] = input_char;
			printf("Count is: %d\n", input_count);
			input_count++;
		}
		else if (input_char != ' ')
		{
			return (0);
		}
		counter++;
	}
	input_array[input_count] = '\0';
	return (input_count == 16);
}
