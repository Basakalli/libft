#include <stdlib.h>
#include "libft.h"
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    
    if (!dest || !src) return (dest);

    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;

    while (n > 0)
    {
        *d = *s;  
        d++;      
        s++;      
        n--;
    }
    return dest;
}
#include <stdio.h>
int main()
{
    char d[] = "1234567";
    
    ft_memcpy(d + 1, d, 7);
    printf("%s",d);

}