/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:10:37 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/01 18:10:37 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char* strrchr(const char* str, int c)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	while (*str != c && i >= 0)
	{
		str--;
		i--;
	}
	if (*str != c)
		return (0);
	return ((char *)str);
}