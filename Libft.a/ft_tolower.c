int	ft_tolower(int x)
{
	if (x <= 'Z' && x >= 'A')
		return (x += 32);
	return (x);
}
#include <stdio.h>
int main()
{
    printf("%d", ft_tolower('A'));
}