#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t  i;

    i = 0;
    while (*(unsigned char *)str1 && *(unsigned char *)str2 && i < n)
    {
        if (*(unsigned char *)str1 != *(unsigned char *)str2)
            return (*(unsigned char *)str1 - *(unsigned char *)str2);
        str1++;
        str2++;
        i++;
    }
    return (*(unsigned char *)str1 - *(unsigned char *)str2);

}