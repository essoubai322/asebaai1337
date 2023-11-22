/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 03:32:22 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/19 08:16:13 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// valgrind --leak-check=full CHECK LEAKS;


static char **free_str(char **str)
{
    size_t i = 0;
    while (str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
    return NULL;
}

static int cword(char const *s, char c)
{
    int i;
    int t;

    t = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            while (s[i] && s[i] != c)
                i++;
            t++;
        }
        if (s[i])
            i++;
    }
    return (t);
}

static char **strt(char const *s,char c, char **str)
{
    int i;
    int j;
    int t;
    
    t = 0;
    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            while (s[i] && s[i] != c)
            {
                i++;
                t++;
            }
            str[j] = ft_calloc(t+ 1, sizeof(char));
            if(!str[j])
               return(free_str(str),NULL);
            j++;
            t = 0;
        }
        if (s[i] == '\0')
            return(str);
        i++;
    }
    return (str);
}



char **ft_split(char const *s, char c)
{
    char **str;
    int cw;
    int i = 0;
    int j = 0;
    int g = 0;
    
    if (!s)
      return (NULL);
    cw = cword(s,c);
    str = malloc(sizeof(char *) * (1 + cw));
    if(!str)
        return (NULL);
    str[cw] = NULL;
    str = strt(s,c,str);
    while (s[i])
    {
        while (s[i] != c && s[i] != '\0')
        {
        str[j][g] = s[i];
        g++;
            if(s[i + 1] == c)
            {
                j++;
                g = 0;
            }
        i++;
        }
        if (s[i] == '\0')
            return(str);
        i++;
    }
    return (str);
}
// int main()
// {
//     int i = 0;
//     char a[] = "ayoub,sebaai.aymen,apa";
//     char **p;
//     p = ft_split(a,',');
//     while(p[i])
//     {
//     printf("%s\n", p[i++]);
//     }
//     free_str(p);
// }