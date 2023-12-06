/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_baze.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a-ait-bo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:23:28 by a-ait-bo          #+#    #+#             */
/*   Updated: 2023/12/06 11:34:25 by a-ait-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_base(int nbr, char *base)
{
	size_t	len;
	size_t	j;
	size_t	nb;

	len = ft_strlen(base);
	nb = nbr;
	j = 0;
	if (nbr < 0)
	{
		j += ft_putchar('-');
		nb = -nb;
	}
	if (nb < len)
		j += ft_putchar(base[nb]);
	if (nb >= len)
	{
		j += ft_putnbr_base(nb / len, base);
		j += ft_putnbr_base(nb % len, base);
	}
	return (j);
}
