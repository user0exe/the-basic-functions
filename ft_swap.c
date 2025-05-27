#include "functions.h"

void	ft_swap(int *ptr1, int *ptr2)
{
	int	tmp;

	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}
