/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: a-ait-bo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:22:07 by a-ait-bo          #+#    #+#             */
/*   Updated: 2023/12/06 10:55:28 by a-ait-bo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int		ft_printf(const char *str, ...)__attribute__ ((format (printf, 1, 2)));
size_t	ft_putad(unsigned long ptr);
size_t	ft_putu(unsigned int ptr);
size_t	ft_puthexa(unsigned int ptr, char *base);
size_t	ft_putchar(char c);
size_t	ft_putnbr_base(int nbr, char *base);
size_t	ft_putstr(char *s);
size_t	ft_strlen(const char *str);

#endif
