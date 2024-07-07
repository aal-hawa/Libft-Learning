/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:51:21 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/03 14:51:21 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t len_sub(char const *s, char c)
{
	size_t i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}
size_t	count_sub(char const *s, char c)
{
	size_t count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count ++;
		s++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
    char	**dst;
	size_t	len;
	size_t	i;
	size_t	j;

	len = count_sub(s, c);
	dst = (char **)malloc(sizeof(char *) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (*s)
	{
		j = 0;
		if (*s != c)
		{
			dst[i] = (char *)malloc(sizeof(char) * (len_sub(s, c) + 1));
			if (!dst[i])
			{
				while (i > 0)
					free(dst[--i]);
				free(dst);
				return (NULL);
			}
			while (*s && *s != c)
			{
				dst[i][j] = *s;
				s++;
				j++;
			}
			dst[i][j] = '\0';
			i++;
		}
		else
		{
			s++;
		}
	}
	*dst = NULL;
	return (dst);
}