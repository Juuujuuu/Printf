/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfunctions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:43:25 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/07 11:40:49 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int    ft_printchar(va_list parameters)
{
    char c;
    int count;

    count = 0 ;
    c = va_arg(parameters, int);
    count = ft_putchar(c);
}
int    ft_printstr(va_list parameters)
{
    char *s;
    int count;

    count = 0 ;
    s = va_arg(parameters, char *);
    count = ft_putstr(s);
}
int    ft_printhex_min(va_list parameters)
{
    unsigned int x;
    int count;

    count = 0 ;    
    x = va_arg(parameters, unsigned int);
    count = ft_putnbr_hexa_min(x);
}
int    ft_printhex_maj(va_list parameters)
{
    unsigned int X;
    int count;

    count = 0 ;
    X = va_arg(parameters, unsigned int);
    count = ft_putnbr_hexa_maj(X);
}
int ft_printpointer(va_list parameters)
{
    unsigned long p;
    int count;

    count = 0 ;
    p = (unsigned long)va_arg(parameters, void *);
    ft_putstr("0x7fff");
    count = ft_putnbr_hexa_min(p);
}

int    ft_printunsigned(va_list parameters)
{
    unsigned int u;
    int count;

    count = 0 ;   
    u = va_arg(parameters, unsigned int);
    count = ft_unsigned(u);
}

int    ft_printnumber(va_list parameters)
{
    int d;
    int count;

    count = 0 ;
    d = va_arg(parameters, int);
    count = ft_putnbr(d);
}