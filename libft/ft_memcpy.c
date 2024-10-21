/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:21:17 by myavas            #+#    #+#             */
/*   Updated: 2024/10/21 17:39:08 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char    *d = dst;
    const char  *s = src;
    while(n--)
    {
        *d++ = *s++;
    }
    return dst; 
}