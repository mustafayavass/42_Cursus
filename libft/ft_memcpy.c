/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:21:17 by myavas            #+#    #+#             */
/*   Updated: 2024/11/03 17:22:52 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char    *d = dst;
    const char  *s = src;
    while(n--)
    {
        *d++ = *s++;
    }
    return dst; 
}

//Bir bellek bölgesinden başka bir bellek bölgesine belirlenen boyutta veri kopyalar.