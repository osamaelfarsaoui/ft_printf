/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:33:08 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/11/12 12:22:17 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list list, char specifier)
{
	int counter;

	counter = 0;
	if (specifier == 'd' || specifier == 'i')
		counter += ft_number(va_arg(list, int));
	else if (specifier == 's')
		counter += ft_putstr(va_arg(list, char *));
	else if (specifier == 'c')
		counter += ft_char(va_arg(list, int));
	else if (specifier == 'u')
		counter += ft_unsigned(va_arg(list, unsigned int));
	else if (specifier == 'p')
		counter += ft_pointer(va_arg(list, unsigned long));
	else if (specifier == 'x')
		counter += ft_hex_lower(va_arg(list, unsigned int));
	else if (specifier == 'X')
		counter += ft_hex_upper(va_arg(list, unsigned int));
	else if (specifier == '%')
		counter += ft_char('%');
	else
	{
		counter += ft_char('%');
		counter += ft_char(specifier);
	}
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		counter;
	va_list	list;

	if (!format || write(1, "", 0) < 0)
		return (-1);
	va_start(list, format);
	counter = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && !format[i + 1])
			return (-1);
		else if (format[i] == '%' && format[i + 1])
		{
			counter += ft_format(list, format[i + 1]);
			i++;
		}
		else
			counter += ft_char(format[i]);
		i++;
	}
	va_end(list);
	return (counter);
}
