/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 10:03:31 by saealzaa          #+#    #+#             */
/*   Updated: 2022/05/27 10:03:43 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int     ft_toupper(int c);
int     ft_atoi(const char *str);
void    bzero(void *s, size_t n);
int     ft_isalnum(int c);
int     ft_isalpha(char c);
int     ft_isascii(int c);
int     ft_isdigit(char c);
int     ft_isprint(int c);
void    *memchr(const void *s, int c, size_t n);
int     memcmp(const void *s1, const void *s2, size_t n);
void    *memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *b, int c, size_t len);
char    *strchr(const char *s, int c);
size_t  strlcat(char *dst, const char *src, size_t dstsize);
size_t  strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlen(const char *s);
int     strncmp(const char *s1, const char *s2, size_t n);
char    *strnstr(const char *haystack, const char *needle, size_t len);
char    *strrchr(const char *s, int c);
int     ft_tolower(int c);
int     ft_toupper(int c);
#endif