/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:51:40 by zwong             #+#    #+#             */
/*   Updated: 2022/05/29 14:51:41 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	input_validation(int argc, char **argv)
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
			input_count++;
		}
		else if (input_char != ' ')
		{
			return (0);
		}
		counter++;
	}
	return (input_count == 16);
}
