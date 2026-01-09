#include <stdlib.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *) dest;
    const unsigned char *s = (const unsigned char *)src;

    if (!dest && !src) return (NULL);
    
    int i = 0;
    if(s > d)
    {
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
   }
   else
   {
    i = n;
        while(i > 0)
        {
            d[i - 1] = s[i - 1];
            i--;
        }
   }
    return (d);
}
#include <stdio.h>
int main()
{
    int d[] = {10, 300, 8, 7, 6};
    int s[] = {4, 3, 2};
    ft_memmove(d, s, 6);
    printf("%d\n", d[0]);
    printf("%d\n", d[1]);
    printf("%d\n", d[2]);
    printf("%d\n", d[3]);
    printf("%d\n", d[4]);

}