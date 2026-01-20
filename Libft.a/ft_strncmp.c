#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
    size_t i = 0;
    
    if(n == 0)
    return 0;
        while(s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
        {
            i++;
        }
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
int main()
{
    char s1[] = "osmana";
    char s2[] = "osman";
    int sonuc = ft_strncmp(s1, s2, 10);
    printf("%d",sonuc);
}