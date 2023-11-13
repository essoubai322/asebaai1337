/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:59:01 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/13 21:08:44 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
    int j;
	char b;

	b = (char)c;
	j = 0;
	i = 0;
	while (s[i] || s[i] != '\0')
	{
		if (s[i] == b)
		{
            j = i;
		}
		if (s[i] == '\0')
		{
			return ((char *)s + i);
		}
		i++;
	}
    if (s[j] == b)
    {
        return ((char *) s + j);
    }
	return (0);
}