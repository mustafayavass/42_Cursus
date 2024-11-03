/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:18:20 by myavas            #+#    #+#             */
/*   Updated: 2024/11/03 17:24:54 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			count;
	unsigned char	*dsts;
	unsigned char	*srcs;

	count = 0;
	dsts = (unsigned char*)dst;
	srcs = (unsigned char*)src;
	if (src < dst)
	{
		len--;
		while ((int)len >= 0)
		{
			dsts[len] = srcs[len];
			len--;
		}
	}
	else
		while (count < len)
		{
			dsts[count] = srcs[count];
			count++;
		}
	return (dst);
}