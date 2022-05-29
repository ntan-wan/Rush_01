void	fill4(int edge_count)
{
	int	result;
	int	row_i;
	int	col_i;
	int	num;

	result = edge_count / 4;
	if (result == 0)
	{
		row_i = 0;
		col_i = edgecount % 4;
	}
	else if (result == 1)
	{
		row_i = 3;
		col_i = edgecount % 4;
	}
	else if (result == 2)
	{
		row_i = edgecount % 4;
		col_i = 0;
	}
	else if (result == 3)
	{
		row_i = edgecount % 4;
		col_i = 3;
	}

}
