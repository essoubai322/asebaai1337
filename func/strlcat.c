/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 06:45:31 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/04 08:11:29 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destl;
	size_t	srcl;
	size_t	total;
	size_t	i;

	destl = ft_strlen(dst);
	srcl = ft_strlen(src);
	total = destl + srcl;
	if (size == 0 || destl >= size)
	{
		return(destl + size);
	}
	i = 0;
	while (src[i] && i < size - destl - 1)
	{
		dst[destl + i] = src[i];
		i++;
	}
	dst[destl + i] = '\0';
	return (total);
}
