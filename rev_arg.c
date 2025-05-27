/* Practice to reverse the arguments passed 
from commands line to main function.*/

#include <unistd.h>

int	ft_arglength(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length - 1);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (i < argc)
	{
		j = ft_arglength(argv[i]);
		while (j >= 0)
		{
			write(1, &argv[i][j], 1);
			j--;
		}
		write(1, "\n", 1);
		i++;
	}
	c = (argc - 1) + '0';
	write(1, "the number of argument is: ", 27);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
