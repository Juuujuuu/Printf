/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:08:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/11 14:16:44 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h> // pour les macros va 
#include <unistd.h> // lib pour write
#include <stdlib.h> // lib pour malloc et free
#include <limits.h> // pour les limites des types

int    ft_printf(const char *format, ...);
void   ft_putchar(char c);
int    ft_strlen(char *s);
void   ft_putstr(char *s);
int    ft_putnbr(int n);
int    ft_putnbr_hexa_min(int n);
int    ft_putnbr_hexa_maj(int n);
int    ft_unsigned(int n);
int    ft_putnbr_hexa_pointer(unsigned long n);

typedef struct s_printf
{
    va_list parameters;
}               t_printf;

int    ft_parser(const char *format, int index, va_list parameters);
int    ft_printchar(va_list parameters);
int    ft_printstr(va_list parameters);
int    ft_printhex_min(va_list parameters);
int    ft_printhex_maj(va_list parameters);
int    ft_printpointer(va_list parameters);
int    ft_printunsigned(va_list parameters);
int    ft_printnumber(va_list parameters);

#endif