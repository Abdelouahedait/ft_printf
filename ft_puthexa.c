/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a-ait-bo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:07:01 by a-ait-bo          #+#    #+#             */
/*   Updated: 2023/12/06 12:18:33 by a-ait-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthexa(unsigned int ptr, char *base)
{	
	size_t	count;

	count = 0;
	if (ptr < 16)
			count += ft_putchar(base[ptr]);
	if (ptr >= 16)
	{
		count += ft_puthexa(ptr / 16, base);
		count += ft_puthexa(ptr % 16, base);
	}
	return (count);
}
