/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:46:12 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/01 18:46:12 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *dst;
    int     i;
    int     j;

    i = 0;
    dst = malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (!dst)
        return(0);
    while (s1[i])
    {
        while (s1[i] && s1[i] != set[0])
        {
            *dst = s1[i];
            i++;
            dst++;
        }
        j = 0;
        while (set[j] && s1[i + j] == set[j])
            j++;
        if (!set[j])
            i =+ j;
        else
        {
            *dst = s1[i];
            i++;
        }
    }
    *dst = 0;
    return (dst);
}