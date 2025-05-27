#include <unistd.h>
#include "functons.h"

void	ft_putnbr(long number)
{
	char	character;

	if (number == -(9223372036854775807L) - 1)
	{
		write(1, "-9223372036854775808", 20);
		return ;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
	}
	character = (number % 10) + '0';
	write(1, &character, 1);
}
