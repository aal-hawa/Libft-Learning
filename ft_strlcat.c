/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:40:53 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/11 21:40:53 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_dst;

	i = 0;
	j = 0;
	if (!dst && size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (dst[j] && j < size)
		j++;
	size_dst = j;
	while (src[i] && size_dst + i + 1 < size)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	if (j < size)
		dst[j] = '\0';
	return (size_dst + ft_strlen(src));
}
