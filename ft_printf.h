/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:08:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/11 16:44:41 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c);
int		ft_strlen(char *s);
void	ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putnbr_hexa_min(int n);
int		ft_putnbr_hexa_maj(int n);
int		ft_unsigned(int n);
int		ft_putnbr_hexa_pointer(unsigned long n);
int		ft_parser(const char *format, int index, va_list parameters);
int		ft_printchar(va_list parameters);
int		ft_printstr(va_list parameters);
int		ft_printhex_min(va_list parameters);
int		ft_printhex_maj(va_list parameters);
int		ft_printpointer(va_list parameters);
int		ft_printunsigned(va_list parameters);
int		ft_printnumber(va_list parameters);

#endif