#include "structs.h"

void	ft_strdup(char	*dist, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dist[i] = src[i];
		i++;
	}
	dist[i] = '\0';
}