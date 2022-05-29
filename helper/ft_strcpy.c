char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
		index++;
	}
	*dest = *src;
	dest -= index - 1;
	return (dest);
}
