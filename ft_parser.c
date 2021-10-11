/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:08:55 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/11 10:40:55 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_parser(const char *format, int index, va_list parameters)
{
    int count;
    
    count = 0;
    if (format[index] == '%')
    {   
        ft_putchar('%');
        count = 1;
    }
    if (format[index] == 'c') 
       count = ft_printchar(parameters);
    if (format[index] == 's')
        count = ft_printstr(parameters);
    if (format[index] == 'd' || format[index] == 'i')
       count =  ft_printnumber(parameters);
    if (format[index] == 'u') 
        count = ft_printunsigned(parameters);
    if (format[index] == 'p')
        count = ft_printpointer(parameters);
    if (format[index] == 'x')
       count =  ft_printhex_min(parameters);
    if (format[index] == 'X')
        count = ft_printhex_maj(parameters);
    return (count);
}
