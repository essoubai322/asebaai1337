/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 06:27:05 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/01 21:36:11 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}