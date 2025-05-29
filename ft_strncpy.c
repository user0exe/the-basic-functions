/* function to copy a string pointer into another one
   based on the number of character you passed. */

char	*ft_strncpy_ptr(char *dst, const char *src, size_t n)
{
	int		i;
	char	*buffer;

	i = 0;
	buffer = dst; // reset the dst to point to the first character after finish.
	while (i < n)
	{
		if (*src != '\0')
		{
			*dst = *src;
			src++;
		}
		else
			*dst = '\0';
		dst++;
		i++;
	}
	return (buffer); // return a buffer, so u can store the result.
}
