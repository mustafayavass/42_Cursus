/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:09:08 by myavas            #+#    #+#             */
/*   Updated: 2024/11/03 15:12:46 by myavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
    if(c >= 32 && c <= 126)
    {
        return 1;
    }
    return 0;
}
//Verilen bir karakterin yazdırılabilir olup olmadığını kontrol eder.