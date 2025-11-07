/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:19:31 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/11/07 21:05:21 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int ft_number(int n);
int	ft_putstr(const char *str);
int	ft_char(char c);
int	ft_unsigned(unsigned int n);
int ft_pointer(unsigned long n);

#endif