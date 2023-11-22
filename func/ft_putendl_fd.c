/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 02:50:34 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/22 11:18:43 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
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
        write(fd, "\n", 1);
}
