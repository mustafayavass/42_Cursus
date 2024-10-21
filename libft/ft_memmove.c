/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:18:20 by myavas            #+#    #+#             */
/*   Updated: 2024/10/21 17:39:19 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *d = dst;
    const char  *s = src;
    if(d < s)
    {
        while(len--)
        {
            *d++ = *s++;
        }
    }
    else
    {
        char    *lasts = s + (len-1);
        char    *lastd = d + (len-1);

        while (len--)
        {
            *lastd-- = *lasts--;
        }
    }
    return dst;
}