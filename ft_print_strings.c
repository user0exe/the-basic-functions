#include <unistd.h>
#include "functons.h"

// Porototype of the ft.
void	ft_print_strings(char **strings);

// Main ft with argument passing.
int	main(int argc, char **argv)
{
	(void)argc;
	ft_print_strings(argv);
	return (0);
}

//Fucntion print thes srings passed as arguments.
void	ft_print_strings(char **strings)
{
	int	i;
	int	j;

	i = 1;
	while (strings[i] != NULL)
	{
		j = 0;
		while (strings[i][j] != '\0')
		{
			write(1, &strings[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
