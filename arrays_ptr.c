#include <unistd.h>

void	putnbr(int number);

int	main(void)
{
	int	array[5] = {5, 10, 20, 7, 3};
	int	sum = 0;
	int	*ptr;
	int	i;

	ptr = array;

	i = 0;
	while (i < 5)
	{
		sum += *ptr;
		ptr++;
		i++;
	}

	write(1, "Sum is: ", 8);
	putnbr(sum);
	write(1, "\n", 1);
	return (0);
}

void	putnbr(int number)
{
	char	c;

	if (number >= 10)
		putnbr(number / 10);
	c = number % 10 + '0';
	write(1, &c, 1);
}
