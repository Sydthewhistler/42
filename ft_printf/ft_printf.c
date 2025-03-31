/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:52:43 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/31 18:22:10 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	type_format(char specifier, va_list args, int *len)
{
	if (specifier == 'd' || specifier == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (specifier == 'u')
		ft_put_unsigned_nbr(va_arg(args, unsigned int), len);
	else if (specifier == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (specifier == '%')
		ft_putchar('%', len);
	else if (specifier == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (specifier == 'p')
	{
		ft_putstr("0x", len);
		ft_putptr_hex ((unsigned long)va_arg(args, void *), len);
	}
	else if (specifier == 'x')
		ft_putnbr_lowercase_hex(va_arg(args, unsigned int), len);
	else if (specifier == 'X')
		ft_putnbr_uppercase_hex(va_arg(args, unsigned int), len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		len;

	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			type_format(format[i + 1], args, &len);
			if (format[i + 1] != '%')
				va_arg(args, void *);
			i += 2;
		}
		else
		{
			ft_putchar(format[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}
