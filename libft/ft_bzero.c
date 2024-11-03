/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:41:19 by myavas            #+#    #+#             */
/*   Updated: 2024/11/03 17:24:08 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

//Belirtilen başlangıçtaki bellek alanını(void *s), belirli boyutta(size_t n) memset fonksiyonunu  
//kullanarak sıfırlarla doldurur.