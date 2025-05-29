#include "functions.h"
/* function return the length of string*/
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
