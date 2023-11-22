/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 02:47:47 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/22 11:26:19 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
        int  i;

        if (!s)
                return ;
        i = 0;
        while (s[i])
        {
                ft_putchar_fd(s[i],fd);
                i++;
        }
}