/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:32:25 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/11/09 12:48:10 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(const char *str)
{
	int	i;
	int	counter;

	counter = 0;
	if (!str)
	{
		counter += ft_putstr("(null)");
		return (counter);
	}
	i = 0;
	while (str[i])
	{
		ft_char(str[i]);
		counter++;
		i++;
	}
	return (counter);
}
