int	ft_strlen(char *str);

char	*remove_char(char *str, char to_remove){
    int i;
	int	j;
    int len;

	i = 0;
	len = ft_strlen(str);

	while (i < len)
	{
		if (str[i] == to_remove)
		{
			j = i;
			while (j < len)
			{
				str[j] = str[j+1];
				j++;
			}
			len--;
			i--;
		}
		i++;
	}
	return (str);
}
