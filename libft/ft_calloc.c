/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:27:27 by myavas            #+#    #+#             */
/*   Updated: 2024/11/03 17:24:19 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}
//Malloc fonksiyonu ile belirli sayıdaki bellek alanını ayırır ve bu alanı 
//sıfırlarla doldurur.