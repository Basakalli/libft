#include "libft.h"
size_t  ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t d = 0;
    size_t s = 0;
    size_t i = 0;
        while(src[s])
        {
            s++;
        }
        while(dst[d] && d < n)
        {
            d++;
        }
        if(d == n)
        return (n + s);
            while (src[i] && (d + i) < (n - 1))
            {
                dst[d + i] = src[i];
                i++;
            }
            return(d + s);
}
#include <stdio.h>

int main()
{
    char d[20] = "merhaba";
    char s[] = "osman";
    ft_strlcat(d, s, 9);
    printf("%s",d); 
}