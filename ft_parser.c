/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:08:55 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/06 18:34:52 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_parser(const char *format, int index, va_list parameters)
{
    if (format[index] == '%')
    {
        ft_putchar('%');
        index++;
    }
    if (format[index] == 'c') 
        ft_printchar(index, parameters);

    if (format[index] == 's')
        ft_printstr(index, parameters);

    if (format[index] == 'd' || format[index] == 'i')
        ft_printnumber(index, parameters);

    if (format[index] == 'u') 
        ft_printunsigned(index, parameters);
        
    if (format[index] == 'p')
        ft_printpointer(index, parameters);

    if (format[index] == 'x')
        ft_printhex_min(index, parameters);

    if (format[index] == 'X')
        ft_printhex_maj(index, parameters);
}
