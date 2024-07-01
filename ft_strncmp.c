#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    while (*str1 && *str2 && n > 0)
    {
        if (*str1 == *str2)
        {
            str1++;
            str2++;
            n--;
        }
     
    }
    return (*str1 - *str2);
}