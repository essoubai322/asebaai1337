/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:40:46 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/17 08:33:00 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
 
char **a_ft_split() {
    char **a01;

    a01 = malloc(sizeof(char *) * 4);
    
    a01[0] = ft_strdup("aiman1");
    a01[1] = ft_strdup("aiman2");
    a01[2] = ft_strdup("aiman3");
    a01[3] = NULL;

    
    return (a01);
}

int main()
{
    char **a = a_ft_split();

    for(int i = 0; a[i]; i++){
        printf("%s\n", a[i]);
        free(a[i]);
    }

    free(a);
}