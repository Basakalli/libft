int ft_isalpha(int c)
{
if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' ))
    return(1);
else
return(0);
}


#include <stdio.h>

int main()
{
    printf("%d",ft_isalpha(','));
}

