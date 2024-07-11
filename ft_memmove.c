/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:46:30 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/04 21:46:30 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*src;

	if (!str1 && !str2)
		return (NULL);
	dst = (unsigned char *)str1;
	src = (const unsigned char *)str2;
	i = 0;
	if (dst > src)
	{
		while (n-- > 0)
			dst[n] = src[n];
	}
	else
	{
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (str1);
}
