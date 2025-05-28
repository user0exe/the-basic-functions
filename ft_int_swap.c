#include "functions.h"
#include <unistd.h>

void	ft_int_swap(int *array, int size);

int	main(void)
{
	int	array[6];
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (i < 6)
	{
		num += 10;
		array[i] = num;
		i++;
	}
	ft_int_swap(array, 6);
	i = 0;
	while (i < 6)
	{
		ft_putnbr(*(array + i));
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

void	ft_int_swap(int *array, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		temp = *(array + i);
		*(array + i) = *(array + size);
		*(array + size) = temp;
		i++;
		size--;
	}
}
