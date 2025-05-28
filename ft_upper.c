#include <unistd.h>
#include "functions.h"

void	ft_upper(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			c = *(str + i) - 32;
		else
			c = *(str + i);
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}
