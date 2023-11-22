/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:33:33 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/18 03:34:30 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
    size_t a = 0;
    size_t b = (ft_strlen(s1) - 1);

    if (!s1 || !set)
        return (NULL);
    
    while (s1[a] && ft_strchr(set, s1[a]) != 0)
        a++;

    while (b > a && ft_strchr(set, s1[b]) != 0)
        b--;
    return (ft_substr(s1, a, b - a + 1));
}