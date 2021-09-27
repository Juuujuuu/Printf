/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:05:37 by julmarti          #+#    #+#             */
/*   Updated: 2021/09/27 17:51:09 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     conversion()
{
    if (format[i] == 'c')
        ft_putchar(format[i]);
    if (i == 's')
        ft_putstr(format);
    if (i == 'p')
        // ft_itoa
    if (i == 'd' || i == 'i')
        ft_putnbr(format[i]);
    if (i == 'u')
        ft_putnbr(format[i]);
    if (i == 'x')
        // ft_itoa 
}


/* formats à gérer : 
c = va_arg(parameters, int)
s = va_arg(parameters, char *)
d = va_arg(parameters, int)
i = va_arg(parameters, int)
u = va_arg(parameters, unsigned int)
p = (unsigned long)va_arg(parameters, void *);
x = va_arg(parameters, unsigned int)
X = va_arg(parameters, unsigned int)