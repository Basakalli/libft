

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (dst < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
		}
	}
	return (dst);
}

#include <stdio.h>

int	main(void)
{
	int d[20] = {10, 9, 8, 7, 6};
	int j = 0;
	d[j + 1];
	ft_memmove(d, d, 4);
	int i = 0;
	while(d[i])
	{
		printf("%d\n",d[i++]);
	}
}