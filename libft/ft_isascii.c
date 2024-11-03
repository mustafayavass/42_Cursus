/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:56:25 by myavas            #+#    #+#             */
/*   Updated: 2024/11/03 15:11:17 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
    {
        return 1;
    }
    return 0;
}
//Verilen bir karakterin ASCII karakter kümesine ait olup olmadığını kontrol eder.