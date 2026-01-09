#ifndef LIBFT_H
# define    LIBFT_H

# include    <string.h>
# include    <unistd.h>

size_t ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
#endif