#include <unistd.h>

int	ft_is_valid_base(char *base)
{
	int	index;
	int	index2;

	index = 0;
	while (base[index])
	{
		if (base[index] == '-' || base[index] == '+')
			return (0);
		index2 = index + 1;
		while (base[index2])
		{
			if (base[index] == base[index2])
				return (0);
			index2++;
		}
		index++;
	}
	if (index < 2)
		return (0);
	return (1);
}
