/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunctions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:43:25 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/06 18:18:28 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_printchar(int index, va_list parameters)
{
    char c;

    c = va_arg(parameters, int);
    ft_putchar(c);
    index++;
}
void    ft_printstr(int index, va_list parameters)
{
    char *s;

    s = va_arg(parameters, char *);
    ft_putstr(s);
    index++;
}
void    ft_printhex_min(int index, va_list parameters)
{
    unsigned int x;
        
    x = va_arg(parameters, unsigned int);
    ft_putnbr_hexa_min(x);
    index++;
}
void    ft_printhex_maj(int index, va_list parameters)
{
    unsigned int X;

    X = va_arg(parameters, unsigned int);
    ft_putnbr_hexa_maj(X);
    index++;
}
void ft_printpointer(int index, va_list parameters)
{
    unsigned long p;

    p = (unsigned long)va_arg(parameters, void *);
    ft_putstr("0x7fff");
    ft_putnbr_hexa_min(p);
    index++;
}

void    ft_printunsigned(int index, va_list parameters)
{
    unsigned int u;
        
    u = va_arg(parameters, unsigned int);
    ft_unsigned(u);
    index++;
}

void    ft_printnumber(int index, va_list parameters)
{
    int d;

    d = va_arg(parameters, int);
    ft_putnbr(d);
    index++;
}