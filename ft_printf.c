/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:33:08 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/11/10 12:05:33 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list list, const char *format, int counter, int i)
{
	if (format[i + 1] == 'd' || format[i + 1] == 'i')
		counter += ft_number(va_arg(list, int));
	else if (format[i + 1] == 's')
		counter += ft_putstr(va_arg(list, char *));
	else if (format[i + 1] == 'c')
		counter += ft_char(va_arg(list, int));
	else if (format[i + 1] == 'u')
		counter += ft_unsigned(va_arg(list, unsigned int));
	else if (format[i + 1] == 'p')
		counter += ft_pointer(va_arg(list, unsigned long));
	else if (format[i + 1] == 'x')
		counter += ft_hex_lower(va_arg(list, unsigned int));
	else if (format[i + 1] == 'X')
		counter += ft_hex_upper(va_arg(list, unsigned int));
	else if (format[i + 1] == '%')
		counter += ft_char('%');
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
		if (format[i] == '%' && format[i + 1])
		{
			counter = ft_format(list, format, counter, i);
			i++;
		}
		else if (format[i] == '%' && !format[i + 1])
			return (-1);
		else
			counter += ft_char(format[i]);
		i++;
	}
	va_end(list);
	return (counter);
}
