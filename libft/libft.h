/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:56:29 by myavas            #+#    #+#             */
/*   Updated: 2024/10/10 16:52:13 by myavas           ###   ########.fr       */
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

#endif