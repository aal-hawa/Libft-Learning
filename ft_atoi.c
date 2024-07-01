/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Anas Al Hawamda <aal-hawa@student.42abu    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 18:08:00 by Anas Al Haw       #+#    #+#             */
/*   Updated: 2024/07/01 18:08:00 by Anas Al Haw      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int sign;
    long res;
    int i;

    sign = 1;
    i = 0;
    res = 0;
    while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-' )
            sign = -1;
        i++;
    }
    while (str[i])
    {
        res = res * 10 + (str[i]  - '0');
        i++;
    }
    res *= sign;
    return ((int)res);
}