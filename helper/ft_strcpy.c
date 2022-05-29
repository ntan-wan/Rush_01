char	*ft_strcpy(char *dest, char *src)
{
	char	*init;

	init = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (init);
}
