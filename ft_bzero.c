/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agazquez <agazquez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 17:55:38 by agazquez          #+#    #+#             */
/*   Updated: 2020/05/13 01:42:51 by agazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *string;

	i = 0;
	string = (unsigned char*)s;
	while (i < n)
	{
		string[i] = 0;
		i++;
	}
}