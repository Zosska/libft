/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agazquez <agazquez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 10:50:46 by agazquez          #+#    #+#             */
/*   Updated: 2020/02/07 10:50:46 by agazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    int i;

    i = 0;
    while ((i =! n)&&(src[i] =! c))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = "/0";
}