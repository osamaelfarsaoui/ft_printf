/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:32:25 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/11/10 11:43:19 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(char c)
{
	return (write(1, &c, 1), 1);
}

int	ft_putstr(const char *str)
{
	int	i;
	int	counter;

	counter = 0;
	if (!str)
		return (counter += ft_putstr("(null)"), counter);
	i = 0;
	while (str[i])
	{
		counter += ft_char(str[i]);
		i++;
	}
	return (counter);
}
