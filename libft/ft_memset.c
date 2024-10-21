/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:05:21 by myavas            #+#    #+#             */
/*   Updated: 2024/10/21 17:39:54 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *ptr = b;
    unsigned char   value = (unsigned char)c;
    
    while(len > 0)
    {
        *ptr = value;
        ptr++;
        len--;
    }
    return b;
}