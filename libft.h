/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiaz-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 12:45:48 by adiaz-lo          #+#    #+#             */
/*   Updated: 2023/04/10 17:46:15 by adiaz-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>

//		MANDATORY - PART 1

int     ft_atoi(const char *string);
void    ft_bzero(void *block, size_t size);
void    *ft_calloc(size_t count, size_t eltsize);
int		ft_isalnum (int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int 	ft_isdigit(int c);
int		ft_isprint(int c);
void    *ft_memchr(const void *s, int c, size_t size);
int     ft_memcmp(const void *s1, const void *s2, size_t size);
void    *ft_memcpy(void *restrict to, const void *restrict from, size_t size);
void    *memmove(void *to, const void *from, size_t size);
void    *ft_memset(void *block, int c, size_t size);
char    *ft_strchr(const char *string, int c);
char    *strdup(const char *s);
size_t  ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
size_t  ft_strlcpy(char *restrict dst, const char restrict *src, size_t dstsize);
size_t  ft_strlen(const char *s);
int     ft_strncmp(const char *s1, const char *s2, size_t size);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_strrchr(const char *string, int c);
int     ft_tolower(int c);
int     ft_toupper(int c);


//		MANDATORY - PART 2



#endif
