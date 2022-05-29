#include<stdio.h>

int	*edgerowcol(int count)
{
	int	 arr[2];

	//first row ---> count zero to three
	if (count >= 0 && count <= 3)
	{
		arr[0] = 0;//row
		arr[1] = count % 4;//col
	}
	//third row ---> count four to seven
	if ( count >= 4 && count <= 7)
	{
		arr[0]  = 3;
		arr[1] = count % 4;
	}	
	//first col---> count eight to eleven
	if ( count >= 8 && count <= 11)
	{
		arr[0] = count % 4;
		arr[1] = 0;
	}
	//third col ---> count twelve to fifteen
	if ( count >= 12 && count <= 15)
	{
		arr[0] = count % 4;
		arr[1] = 3;
	}
	return(arr);
}

//ask for edge array
//board -->row, col, str
void constraint(char edge_array[16], char board[4][4][5])
{
	int count;
	count = 0;
	row = 0;
	col = 0;
	
	while(count < 16)
	{
		int	*result;
		
		result = edgerowcol(count);

		row = result[0];
		col = result[1];

		//if the value in the edge array is one
		if (edge_array[count] == '1')	
		{
			ft_strcpy(board[row][col], "4");	
		}

		//if the value in the edge array is four
		if (edge_array[count] == '4')	
		{
				
		}

		//if the value in the edge array is three
		if (edge_array[count] == '3')	
		{
			ft_strcpy(board[row][col], "12");	
		}

		//if the value in the edge array is two
		if (edge_array[count] == '2')	
		{
			ft_strcpy(board[row][col], "123");
		}
		count++;
	}
}

