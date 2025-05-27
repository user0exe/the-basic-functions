#include <unistd.h>

// The functions declaration.
int	ft_add(int x, int y);
int	ft_subtract(int x, int y);
int	ft_multiply(int x, int y);
int	ft_calculate(int (*ptr)(int x, int y), int x, int y);

// The main function.
int	main(void)
{
	int		add_sum;
	int		sub_sum;
	int		multi_sum;
	char	c;

	add_sum = ft_calculate(ft_add, 4, 3);
	sub_sum = ft_calculate(ft_subtract, 4, 3);
	multi_sum = ft_calculate(ft_multiply, 3, 2);
	c = add_sum + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = sub_sum + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = multi_sum + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}

// The functions define.
int	ft_add(int x, int y)
{
	return (x + y);
}

int	ft_subtract(int x, int y)
{
	return (x - y);
}

int	ft_multiply(int x, int y)
{
	return (x * y);
}

// Calculate function, take a pointer to ft.
int	ft_calculate(int (*ptr)(int x, int y), int x, int y)
{
	int	result;

	result = ptr(x, y);
	return (result);
}
