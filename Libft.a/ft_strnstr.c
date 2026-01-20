#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j;

 
    if (needle[0] == '\0')
    {
        return ((char *)haystack);
    }
    while (haystack[i] != '\0' && i < len)
    {
        j = 0; 

        
        while (needle[j] != '\0' && haystack[i + j] == needle[j] && (i + j) < len)
        {
            if (needle[j + 1] == '\0')
            {
                return ((char *)&haystack[i]);
            }
            j++;
        }
        i++;
    }

    return (NULL);
}
int main()
{
    char hy[] = "kelime burada degil";
    char ndl[] = "burada";
    char *sonuc = ft_strnstr(hy, ndl, 25);
    printf("%s",sonuc);
}