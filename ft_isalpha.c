/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agazquez <agazquez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 23:25:14 by agazquez          #+#    #+#             */
/*   Updated: 2020/04/06 23:25:14 by agazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
        return (1);
    return (0);
}