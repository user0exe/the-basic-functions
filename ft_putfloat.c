#include <unistd.h>

void	ft_putfloat(float number);
void	ft_putint(int number);

void	ft_putfloat(float number)
{
	float	deci_part;

	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}

	ft_putint((int)number);
	write(1, ".", 1);
	deci_part = number - (int)number;
	deci_part *= 100;
	ft_putint((int)deci_part);
}

void	ft_putint(int number)
{
	char	c;

	if (number == -(2147483648))
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	if (number >= 10)
		ft_putint(number / 10);
	c = (number % 10) + '0';
	write(1, &c, 1);
}
