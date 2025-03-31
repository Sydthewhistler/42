/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:48:20 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/31 18:00:59 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putstr(char *str, int *len);
void	ft_putchar(char c, int *len);
void	ft_put_unsigned_nbr(unsigned int n, int *len);
void	ft_putnbr_lowercase_hex(unsigned int n, int *len);
void	ft_putnbr_uppercase_hex(unsigned int n, int *len);
void	ft_putptr_hex(unsigned long n, int *len);
void	ft_putnbr(int n, int *len);
int		ft_printf(const char *format, ...);

#endif