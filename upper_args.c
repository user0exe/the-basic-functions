#include "functions.h"

void	uppercase_args(char ***argv)
{
	int	i;
	int	j;

	i = 1;
	while ((*argv)[i])
	{
		j = 0;
		ft_upper((*argv)[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	uppercase_args(&argv);
	return (0);
}
