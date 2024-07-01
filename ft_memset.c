#include "libft.h"

void *ft_memset(void* str, int c, size_t n)
{
	size_t i;
	
	if (!str)
		return (0);
	i = 0;
	while (i < n)
	{
		(unsigned char*)str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}