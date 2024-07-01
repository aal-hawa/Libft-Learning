/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:10:33 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/01 18:10:33 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (!*little)
        return ((char *)big);
    while (big[i] && i < n)
    {
        j = 0;
        while (big[i + j] && little[j] && i + j < n && big[i + j] == little[j])
            j++;
        if (!little[j])
            return ((char*)(big + i));
        i++;
    }
    return (0);
}