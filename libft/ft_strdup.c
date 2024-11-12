/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:31:02 by myavas            #+#    #+#             */
/*   Updated: 2024/11/12 13:40:02 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*str;
	int		buf_size;

	buf_size = ft_strlen(src) + 1;
	str = malloc(buf_size);
	if (NULL == str)
		return (NULL);
	ft_strlcpy(str, src, buf_size);
	return (str);
}
