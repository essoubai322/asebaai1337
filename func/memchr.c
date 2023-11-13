/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:13:56 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/13 21:30:28 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (n > i)
    {
        if ((unsigned char)c == '\0' && ((unsigned char *)s)[i] == c)
        {
            return ((unsigned char *)s + i);
        }
        else if (((unsigned char *)s)[i] == (unsigned char)c)
        {
            return ((unsigned char *)s + i);
        }
        i++;
    }
    return (NULL);
}