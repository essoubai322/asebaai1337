/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 23:06:53 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/19 07:42:51 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;

    if (!s)
        return NULL;
        
    if (start > ft_strlen(s))
      return (str = ft_strdup(""));
        
    if (len >= ft_strlen(s + start))
      len = ft_strlen(s + start);
      
    str = malloc(len + 1);
    if (!str)
        return (NULL);
    ft_strlcpy(str, s + start, len + 1);
    return (str);
}
