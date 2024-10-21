/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:07:43 by myavas            #+#    #+#             */
/*   Updated: 2024/10/21 17:38:54 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1 = s1, *str2 = s2;

    while (n--)
    {
        if(*str1 != *str2)
        {
            return *str1 - *str2;
        }
        else
        {
            str1++;
            str2++;
        }
    }
    return 0;
}