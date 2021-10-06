/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunctions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:43:25 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/06 20:02:18 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_printchar(va_list parameters)
{
    char c;

    c = va_arg(parameters, int);
    ft_putchar(c);
}
void    ft_printstr(va_list parameters)
{
    char *s;

    s = va_arg(parameters, char *);
    ft_putstr(s);
}
void    ft_printhex_min(va_list parameters)
{
    unsigned int x;
        
    x = va_arg(parameters, unsigned int);
    ft_putnbr_hexa_min(x);
}
void    ft_printhex_maj(va_list parameters)
{
    unsigned int X;

    X = va_arg(parameters, unsigned int);
    ft_putnbr_hexa_maj(X);
}
void ft_printpointer(va_list parameters)
{
    unsigned long p;

    p = (unsigned long)va_arg(parameters, void *);
    ft_putstr("0x7fff");
    ft_putnbr_hexa_min(p);
}

void    ft_printunsigned(va_list parameters)
{
    unsigned int u;
        
    u = va_arg(parameters, unsigned int);
    ft_unsigned(u);
}

void    ft_printnumber(va_list parameters)
{
    int d;

    d = va_arg(parameters, int);
    ft_putnbr(d);
}