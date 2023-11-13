/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 03:52:14 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/13 21:31:28 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t atoi_prime(const char *str, int sign)
{
  int i;
  size_t result;
  
  i = 0;
  result = 0;
  while (str[i] >= 48 && str[i] <= 57)
    {
       
        result = result * 10 + (str[i] - 48);
         if (result > LONG_MAX)
        {
          if (sign == -1)
            return (0);
          return (-1);
        }
        i++;
    }
    return (result);
}
int    ft_atoi(const char *str)
{
    int    i;
    int    sign;

    i = 0;
    sign = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        i++;
    }
    if (str[i] == 43 || str[i] == 45)
    {
        if (str[i] == 45)
        {
            sign *= -1;
        }
        i++;
    }
    return (atoi_prime(str, sign));
}
