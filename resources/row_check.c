#include <unistd.h>

int check_left(int tab[4][4], int *edge, int pos)
{
	int i;
	int max;
	int counter;

	i = 0;
	max = 0;
	counter = 0;
	if (pos % 4 != 3)	//check only when 4th col
		return (0);
	else
	{
		while (i < 4)
		{	
			tab[i][pos % 4] = max;
			i++;
			if (tab[i][pos % 4] > max)
				counter++;
		}
	}
	if (counter == *(edge[2][pos / 4]) //if counter equal to edge value
		return (1);
}

