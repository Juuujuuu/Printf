/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:36:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/06 17:47:47 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list parameters;
    va_start (parameters, format);
    int index;

    index = 0;
    while(format[index] != '\0')
   {
       if (format[index] != '%')
        {
            ft_putchar(format[index]);  
            index++;
        }
        if (format[index] == '%')
        {
            index++;
            ft_parser(format, index, parameters);
        }
    }
    va_end (parameters);
    return (index);
}



