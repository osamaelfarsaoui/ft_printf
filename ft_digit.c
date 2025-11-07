/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:50:13 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/11/07 21:01:57 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_number(int n)
{
	int	counter;

	counter = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	else if (n > 9)
	{
		counter += ft_number(n / 10);
		ft_char((n % 10) + '0');
	}
	else if (n < 0)
	{
		ft_char('-');
		counter += ft_number(-n);
	}
	else
		ft_char(n + '0');
	counter++;
	return (counter);
}

int	ft_unsigned(unsigned int n)
{
	int counter;

	counter = 0;
	if (n > 9)
	{
		counter += ft_unsigned(n / 10);
		ft_char((n % 10) + '0');
	}
	else
		ft_char(n + '0');
	counter++;
	return (counter);
}

int ft_pointer(unsigned long n)
{
	int counter;
	char *hex;

	counter = 0;
	hex = "0123456789abcdef";
	if (n > 15)
		counter += ft_pointer(n / 16);
	if (n < 16)
		counter += ft_putstr("0x");
	ft_char(hex[n % 16]);
	counter++;
	return (counter);
}
