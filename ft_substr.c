/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-hawa <aal-hawa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:08:41 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/02 14:39:45 by aal-hawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	sz;

	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (0);
	i = 0;
	sz = 0;
	while (*s && i < start)
		s++;
	if (!*s)
		return (0);
	while (*s && sz < len)
	{
		*dst = *s;
		sz++;
		dst++;
		s++;
	}
	*dst = 0;
	return (dst);
}
