/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:32:25 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/11/07 21:02:53 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
	if(!str)
	{
		counter += ft_putstr("(null)");
		return (counter);
	}
	counter = 0;
	i = 0;
	while(str[i])
	{
		counter += ft_char(str[i]);
		i++;
	}
	return (counter);
}
