/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a-ait-bo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:23:56 by a-ait-bo          #+#    #+#             */
/*   Updated: 2023/12/06 10:44:42 by a-ait-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putu(unsigned int ptr)
{	
	size_t	count;
	char	*base;

	count = 0;
	base = "0123456789";
	if (ptr < 10)
			count += ft_putchar(base[ptr]);
	if (ptr >= 10)
	{
		count += ft_putu(ptr / 10);
		count += ft_putu(ptr % 10);
	}
	return (count);
}
