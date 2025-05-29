#include "functions.h"
/* comparison function return the differnt of two strings,
from the first mismatch its faceing*/
int	ft_strcmp(char *str1, char *str2)
{
	int	index;

	index = 0;
	while (*(str1 + index) != '\0' || *(str2 + index) != '\0')
	{
		if (*(str1 + index) != *(str2 + index))
			return (*(str1 + index) - *(str2 + index));
		index++;
	}
	return (0);
}
