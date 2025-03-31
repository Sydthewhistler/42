/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:03:47 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/31 18:02:41 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_hex(unsigned long n, int *len)
{
	if (n >= 16)
		ft_putptr_hex(n / 16, len);
	write(1, &"0123456789abcdef"[n % 16], 1);
	(*len)++;
}
