#include "libft.h"

size_t	ft_strlcat(char* dst, const char* src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_dst;

	j = ft_strlen(dst);
	size_dst = j;
	i = 0;
	while (src[i] && size_dst + i < size -1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = 0;
	return(size_dst + ft_strlen(src));
}