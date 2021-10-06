/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:08:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/06 20:03:20 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h> // pour les macros va 
#include <unistd.h> // lib pour write
#include <stdlib.h> // lib pour malloc et free 

int     ft_printf(const char *format, ...);
void    ft_putchar(char c);
void    ft_putstr(char *s);
void    ft_putnbr(int n);
void    ft_putnbr_hexa_min(int n);
void    ft_putnbr_hexa_maj(int n);
void    ft_unsigned(int n);

typedef struct s_printf
{
    va_list parameters;
}               t_printf;

void    ft_parser(const char *format, int index, va_list parameters);
void    ft_printchar(va_list parameters);
void    ft_printstr(va_list parameters);
void    ft_printhex_min(va_list parameters);
void    ft_printhex_maj(va_list parameters);
void    ft_printpointer(va_list parameters);
void    ft_printunsigned(va_list parameters);
void    ft_printnumber(va_list parameters);

#endif