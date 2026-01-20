#include <stdlib.h>

void	*ft_memset(void *s, int value, size_t len)
{
	unsigned char	*z;

	z = (unsigned char *)s;
	while (len > 0)
	{
		*z = (unsigned char)value;
		z++;
		len--;
	}
	return (s);
}
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char a[] = "utku";
	ft_memset(a, 'a', 4);
	printf("%s\n", a);
}