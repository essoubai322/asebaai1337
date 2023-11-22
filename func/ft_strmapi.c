/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 10:03:40 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/20 02:35:36 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	sss(unsigned  int c, char a)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	a = (unsigned char)c;
	return (a);
}

char *ft_strmapi(char const *s, char (*f)(unsigned  int, char))
{
    char *str;
   int i = 0;
    int len;
    
    if (!s)
        return NULL;
    len = ft_strlen(s) + 1;
    str = ft_calloc(len,1);
    while (s[i])
    {
        str[i] = f(s[i],i);
        i++;
    }
    return(str);
}

// int main()
// {
//     char *s = "ayoub";
   
//     char *a  = ft_strmapi(s, sss);
//     printf("%s", a);
//     free(a);
// }