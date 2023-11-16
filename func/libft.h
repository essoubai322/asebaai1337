/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebaai <asebaai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:39:35 by asebaai           #+#    #+#             */
/*   Updated: 2023/11/16 03:36:40 by asebaai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <malloc.h>
#include <limits.h>
#include <stdint.h>


// functions
int    ft_atoi(const char *str);
void	*ft_calloc(size_t nmemb, size_t size);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strrchr(const char *s, int c);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_isprint(int c);
void	ft_bzero(void *s, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
char    *ft_strdup(const char *s);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char  *ft_strchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char  *ft_strnstr(const char *big, const char *little, size_t len);
int	ft_tolower(int c);
int	ft_toupper(int c);
char *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strdup(const char *s);



#endif