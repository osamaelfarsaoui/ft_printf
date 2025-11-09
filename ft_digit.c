/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:50:13 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/11/09 12:12:20 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_number(int n)
{
	int	counter;

	counter = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
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
	int	counter;

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
