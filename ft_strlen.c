#include "functions.h"

int	ft_strlen(char *str)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (str[index] != '\0')
	{
		count++;
		index++;
	}
	return (count);
}
