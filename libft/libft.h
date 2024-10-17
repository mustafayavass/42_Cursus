/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:56:29 by myavas            #+#    #+#             */
/*   Updated: 2024/10/17 14:16:55 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

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
int	ft_strncmp(char *s1, char *s2, unsigned int n);
void    *ft_memset(void *b, int c, size_t len);
void    bzero(void *s, size_t n);

#endif