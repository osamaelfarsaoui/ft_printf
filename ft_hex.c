/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:29:40 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/11/10 11:36:43 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long n)
{
	int			counter;
	const char	*hex;

	counter = 0;
	hex = "0123456789abcdef";
	if (!n)
		return (counter += ft_putstr("(nil)"), counter);
	if (n > 15)
		counter += ft_pointer(n / 16);
	if (n < 16)
		counter += ft_putstr("0x");
	ft_char(hex[n % 16]);
	counter++;
	return (counter);
}

int	ft_hex_lower(unsigned int n)
{
	int			counter;
	const char	*hex;

	counter = 0;
	hex = "0123456789abcdef";
	if (n > 15)
		counter += ft_hex_lower(n / 16);
	ft_char(hex[n % 16]);
	counter++;
	return (counter);
}

int	ft_hex_upper(unsigned int n)
{
	int			counter;
	const char	*hex;

	counter = 0;
	hex = "0123456789ABCDEF";
	if (n > 15)
		counter += ft_hex_upper(n / 16);
	ft_char(hex[n % 16]);
	counter++;
	return (counter);
}
