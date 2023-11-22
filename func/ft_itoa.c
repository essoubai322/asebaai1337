/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 00:00:45 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/19 08:07:48 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
  int m;
  int i;
  int s;
  char *a;
  int moins;
  
  i = 1;
  moins = 0;
  if (n == -2147483648)
    return(ft_strdup("-2147483648"));
  if (n < 0)
  {
    n *= -1;
    moins = 1;
    m = n;
  }
  m = n;
  while (m > 9)
  {
    m /= 10; 
    i++;
  }
  if (moins == 0)
  {
    a = calloc(i + 1, sizeof(char));
  }
  else
  {
    i++;
    a = calloc(i + 1, sizeof(char));
    a[0] = '-';
  }
  if (n == 0)
  {
    a[i - 1] = '0';
    return (a);
  }
  while (n > 0 && moins == 0)
  { 
    s = n % 10;
    a[i - 1] = s + '0';
    n = n / 10;
    i--;
  }
  while (n > 0 && !(a[i - 1] == '-'))
  {
    s = n % 10;
    a[i - 1] = s + '0';
    n = n / 10;
    i--;
  }
  return (a);
}
// int main()
// {
//   char *a;
//   int i = 0;
//   a = ft_itoa(-2147483647);
//   printf("%s", a);
// }