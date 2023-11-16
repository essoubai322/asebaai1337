/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:33:36 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/16 03:37:36 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    size_t s;
    
    if (SIZE_MAX / nmemb < size)
        return (NULL);
    s = nmemb * size;
    ptr = malloc(s);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr,s);
    return (ptr);
}
/*int main()
{
    void *p;
    void *c;
    p = ft_calloc( -1, -1);
    c = calloc(-1,-1);
    printf("dorijine : %s || %p\n", (char *)p, p);
    printf("%s || %p", (char *)c, c);

}*/