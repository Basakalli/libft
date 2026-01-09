#include <stdlib.h>

void *ft_memset(void *s, int value, size_t len)
{
    unsigned char* z = (unsigned char*)s;
    
    while(len > 0)
    {
        *z = (unsigned char)value;
        z++;
        len--;
    }
    return s;
}
#include <stdio.h>
int main()
{
    printf("%d\n" , (unsigned char)993);
    //int a[] = {256, 9, 8};
    //ft_memset(a, 768, 4);
    //printf("%d\n",a[0]);
    //printf("%d\n",a[1]);
    //printf("%d\n",a[2]);
}