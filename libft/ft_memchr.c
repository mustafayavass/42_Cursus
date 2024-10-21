/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:29:36 by myavas            #+#    #+#             */
/*   Updated: 2024/10/21 17:38:35 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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