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

#include "libftprintf.h"

int	ft_char(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(const char *str)
{
	int	i;
	int	counter;

	counter = 0;
	if (!str)
	{
		counter += ft_putstr("(null)");
		if (counter < 0)
			return (-1);
		return (counter);
	}
	i = 0;
	while (str[i])
	{
		if (ft_char(str[i]) == -1)
			return (-1);
		counter++;
		i++;
	}
	return (counter);
}
