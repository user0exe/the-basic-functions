#include "functions.h"
/*a short version*/
int	ft_strlen(char *str)
{
	int	count;
	int	index;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
