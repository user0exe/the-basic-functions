#include <unistd.h>

void	putnbr(int number);

int	main(void)
{
	int	array[5];
	int	sum;
	int	i;

	i = 0;
	sum = 0;
	array[0] = 5;
	array[1] = 10;
	array[2] = 20;
	array[3] = 7;
	array[4] = 3;
	while (i < 5)
	{
		sum += array[i];
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
