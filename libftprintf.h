/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:19:31 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/11/09 13:04:05 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_number(int n);
int	ft_unsigned(unsigned int n);
int	ft_putstr(const char *str);
int	ft_char(char c);
int	ft_pointer(unsigned long n);
int	ft_hex_lower(unsigned int n);
int	ft_hex_upper(unsigned int n);

#endif