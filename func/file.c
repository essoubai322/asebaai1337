/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 03:23:42 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/14 03:25:02 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdint.h>
#include<stddef.h>
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<limits.h>




int main()
{

  size_t d = 19733130000;

        void *x;
         x = calloc(d, 1);
        // x = malloc();
         printf("%p\n", x);
        // printf("%lu", SIZE_MAX);
        return 0;
}