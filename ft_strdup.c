#include "libft.h"

char *ft_strdup(const char *str)
{
    char    *dst;
    int     i;
    size_t  s;

    i = 0;
    s = 0;
    s = ft_strlen(str);
    dst = malloc(sizeof(char) * (s + 1));
    if (!dst)
        return (0);
    while (str[i])
    {
        dst[i] = str[i];
        i++;
    }
    dst[i] = 0;
    return (dst);
}