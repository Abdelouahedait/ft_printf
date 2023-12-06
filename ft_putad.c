/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a-ait-bo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:22:27 by a-ait-bo          #+#    #+#             */
/*   Updated: 2023/12/06 10:35:08 by a-ait-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putad(unsigned long ptr)
{	
	size_t	count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (ptr < 16)
		count += ft_putchar(base[ptr]);
	if (ptr >= 16)
	{
		count += ft_putad(ptr / 16);
		count += ft_putad(ptr % 16);
	}
	return (count);
}
