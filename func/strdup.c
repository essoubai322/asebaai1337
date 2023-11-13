/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:54:02 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/13 21:47:39 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t i;
    char *str;
    size_t ls;
    
    ls = ft_strlen(s) + 1;
    i = 0;
    str = (char *)ft_calloc(ls, sizeof(char));
    if (!str)
    {
        return (NULL);
    }
    ft_strlcpy(str,s,ls);
    return (str);
}

int main()
{
    char *a;
    char *b;
    
    a = NULL;
    b = ft_strdup(a);
    printf("%s", b);
}