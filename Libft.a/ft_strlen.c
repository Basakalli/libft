#include "libft.h"
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
#include <stdio.h>

int	main(void)
{
	char *a = "osman";
	int size;
	size = ft_strlen(a);
	printf("%d", size);
}