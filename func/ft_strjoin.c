/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:03:38 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/16 13:21:37 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t lent;
    size_t i;
    size_t j;
    
    i = 0;
    j = 0;
    lent = ft_strlen(s1) + ft_strlen(s2);
    if (!s1 || !s2)
        return (NULL);
    str = malloc(lent + 1);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        str[i] = s2[j];
        j++;
        i++;
    }
    str[i] = '\0';
    return (str);   
}