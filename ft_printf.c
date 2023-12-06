/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a-ait-bo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:21:39 by a-ait-bo          #+#    #+#             */
/*   Updated: 2023/12/06 11:45:05 by a-ait-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_specifier(va_list arg, char f)
{
	unsigned long	ptr;

	if (f == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (f == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (f == 'd' || f == 'i')
		return (ft_putnbr_base(va_arg(arg, int), "0123456789"));
	else if (f == 'u')
		return (ft_putu(va_arg(arg, unsigned int)));
	else if (f == 'x')
		return (ft_puthexa(va_arg(arg, int), "0123456789abcdef"));
	else if (f == 'X')
		return (ft_puthexa(va_arg(arg, int), "0123456789ABCDEF"));
	else if (f == 'p')
	{
		ft_putstr("0x");
		ptr = va_arg(arg, unsigned long);
		if (ptr)
			return (ft_putad(ptr) + 2);
		return (ft_putchar('0') + 2);
	}
	else if (f == '%')
		return (ft_putchar(f));
	return (0);
}

static int	ft_format(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_format(format[i + 1], "cspdiuxX%"))
		{
			len += check_specifier(arg, format[i + 1]);
			i++;
		}
		else if (format[i] != '%')
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
