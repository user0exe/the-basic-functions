
char	*ft_strcpy_ptr(char *dst, const char *src)
{
	int		i;
	char	*start;

	i = 0;
	start = dst;
	while (*src != '\0')
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = '\0';

	return (start);
}
