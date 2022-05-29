int	ft_strlen(char	*str)
{
	int	char_length;

	char_length = 0;
	while (str[char_length] != '\0')
	{
		char_length++;
	}
	return (char_length);
}
