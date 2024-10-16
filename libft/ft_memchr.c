/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:29:36 by myavas            #+#    #+#             */
/*   Updated: 2024/10/17 15:40:30 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *p = (unsigned char*)s;
    
    while (n--)
    {
        if(*p != (unsigned char*)s)
        {
            p++;
        }
        else
        {
            return p;
        }
    }
    return 0;
}