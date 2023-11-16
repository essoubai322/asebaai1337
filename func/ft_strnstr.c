/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:25:28 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/16 01:56:17 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strnstr(const char *big, const char *little, size_t len)
{
  size_t i;
  size_t j;
  
  i = 0;
  j = 0;
  if (!little || *little == 0)
    {
        return ((char *)big);
    }
    while (big[i] && (len > 0))
    {
        j = 0;
        while (big[i + j] == little[j])
        {
            if (little[j + 1] == '\0')
            {
                return ((char *)big + i);
            }
            if (len - 1 == 0)
            {
              return (NULL);
            }
            j++;
        }
        len--;
        i++;
    }
    return (NULL);
}
