/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 02:46:30 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/22 14:44:47 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// It is an integer file descriptor for the opened file, 
// which the open() function returns when opening a file.

#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}