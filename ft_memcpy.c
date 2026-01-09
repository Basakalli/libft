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
    int d[] = {10, 9, 8, 7, 6};
    int s[] = {4, 3, 2};
    ft_memcpy(d + 2, d, 12);
    printf("%d\n", d[0]);
    printf("%d\n", d[1]);
    printf("%d\n", d[2]);
    printf("%d\n", d[3]);
    printf("%d\n", d[4]);

}