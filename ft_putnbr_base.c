#include <unistd.h>
#include "functions.h"
// convert the number into base systeme based on the lenght of base.
void	ft_putnbr_base(int number, char *base)
{
	unsigned int	num;
	int				length;

	if (number < 0)
	{
		write(1, "-", 1);
		num = (unsigned int)-number;
	}
	else
	{
		num = (unsigned int)number;
	}
	if (!ft_is_valid_base(base))
		return ;
	length = ft_strlen(base);
	if (num >= length)
		ft_putnbr_base(num / length, base);
	write(1, &base[num % length], 1);
}
