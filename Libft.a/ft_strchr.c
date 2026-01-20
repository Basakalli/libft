#include "libft.h"
char	*ft_strchr(const char *s, int i)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if (*ptr == (char)i)
			return (ptr);
		ptr++;
	}
	if ((char)i == '\0')
		return ((char *)ptr);
	return (NULL);
}
int main()
{
    char s[] = "osman";
    char *aranan = ft_strchr(s, 'a');
    printf("%s", aranan);
}