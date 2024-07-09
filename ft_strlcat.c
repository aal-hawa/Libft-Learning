/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hawa <aal-hawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:09:55 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/09 18:47:43 by aal-hawa         ###   ########.fr       */
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
