/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:58:39 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/10 01:58:51 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t	i;
	unsigned char *a;
	unsigned char *b;
	
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	if(!(a || b))
    	return (0);
	while (i < n)
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
		i++;
	}
	return (0);
}
