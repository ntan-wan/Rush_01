#include <stdlib.h>

int	user_input(char ***av, int **collect_input)
{
	int	col;
	int	i;
	int	index_row;
	int	index_col;
	*collect_input = malloc(sizeof(int) * 20);

	col = 0;
	i = 0;
	while ((*av)[1][col] != '\0')
	{
		if((*av)[1][col] >= '1' && (*av)[1][col] <= '4')
		{	
			(*collect_input)[i] = (*av)[1][col];
			i++;
		}
		col++;	
	}
	return 0;
}
