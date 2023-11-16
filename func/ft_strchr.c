/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:16:14 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/15 05:45:27 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strchr(const char *s, int c)
{
	int i;
	char b;

	b = (char)c;
	i = 0;
	if (c == 0)
       return ((char *) s + ft_strlen(s));
	while (s && s[i] != '\0')
	{
		if (s[i] == b)
		{
			return ((char *) s + i);
		}
		i++;
	}
	return (0);
}
