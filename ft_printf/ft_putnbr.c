/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:29:18 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/31 18:04:35 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putstr("-2147483648", len);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', len);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, len);
	}
	c = (n % 10) + '0';
	ft_putchar(c, len);
}

void	ft_put_unsigned_nbr(unsigned int n, int *len)
{
	char	c;

	if (n >= 10)
	{
		ft_putnbr(n / 10, len);
	}
	c = (n % 10) + '0';
	ft_putchar(c, len);
}
