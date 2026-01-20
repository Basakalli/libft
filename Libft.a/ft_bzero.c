#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
#include <unistd.h>
#include <stdio.h>
int main()
{
    char a[] = "osman";
    ft_bzero(a,3);
    printf(NULL , 3);
    
}