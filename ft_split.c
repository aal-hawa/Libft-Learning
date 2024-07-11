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

size_t	len_sub(char const *s, char c)
{
	size_t	i;

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
	size_t	count;
	int		in_sub;

	count = 0;
	in_sub = 0;
	while (*s)
	{
		if (*s != c && !in_sub)
		{
			in_sub = 1;
			count++;
		}
		else if (*s == c)
			in_sub = 0;
		s++;
	}
	return (count);
}

void	free_split(char **dst, size_t i)
{
	while (i > 0)
		free(dst[--i]);
	free(dst);
}

void	sub_split(char **dst, char const *s, char c, size_t i)
{
	size_t	j;

	while (*s)
	{
		j = 0;
		if (*s != c)
		{
			dst[i] = (char *)malloc(sizeof(char) * (len_sub(s, c) + 1));
			if (!dst[i])
			{
				free_split(dst, i);
				return ;
			}
			while (*s && *s != c)
			{
				dst[i][j++] = *s;
				s++;
			}
			dst[i++][j] = '\0';
		}
		else
			s++;
	}
	dst[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	len = count_sub(s, c);
	dst = (char **)malloc(sizeof(char *) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	sub_split(dst, s, c, i);
	return (dst);
}
