/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:29:36 by myavas            #+#    #+#             */
/*   Updated: 2024/11/03 17:24:42 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t count;

	count = 0;
	while (count < n)
	{
		if (((unsigned char*)s)[count] == (unsigned char)c)
			return (&((unsigned char*)s)[count]);
		else
			count++;
	}
	return (NULL);
}

//Başlangıcı belirtilen bellek alanında(const void *s) belirtien boyutta(size_t n),
//belirtilen karakteri(int c) aramak için kullanır.