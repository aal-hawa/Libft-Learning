/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hawa <aal-hawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:49:28 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/10 16:43:36 by aal-hawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_cpy;

	dst_cpy = (char *)dst;
	if (!dst && !src)
		return (NULL);
	while (n--)
		*dst_cpy++ = *(char *)src++;
	return (dst);
}
