/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:21:22 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/22 11:22:28 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
        if (n == -2147483648)
        {
                write(fd, "-2147483648", 11);
                return ;
        }
        if (n < 0)
        {
                ft_putchar_fd('-', fd);
                n = -n;
        }
        if (n >= 0 && n <= 9)
        {
                ft_putchar_fd(n + '0', fd);
        }
        else
        {
                ft_putnbr_fd(n / 10, fd);
                ft_putnbr_fd(n % 10, fd);
        }
}
