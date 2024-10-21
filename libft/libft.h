/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:56:29 by myavas            #+#    #+#             */
/*   Updated: 2024/10/21 18:22:29 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_toupper(int c);
int ft_strlen(const char *s);
int ft_isprint(int c);
int ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int ft_strncmp(char *s1, char *s2, unsigned int n);
void    *ft_memset(void *b, int c, size_t len);
void    bzero(void *s, size_t n);
void    *memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_atoi(const char *str);
char    *ft_strdup(char *src);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);

#endif