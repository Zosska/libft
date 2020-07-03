/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agazquez <agazquez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 21:21:56 by agazquez          #+#    #+#             */
/*   Updated: 2020/04/07 01:18:29 by agazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
        size_t i;

        i = 0;
        while (i < n)
        {
            ((char*)dest)[i] = ((char*)src)[i];
            i++;
        }
        return (dest);
}