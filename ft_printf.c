/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:36:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/11 17:07:56 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		index;
	int		count;
	va_list	parameters;

	va_start(parameters, format);
	index = 0;
	count = 0;
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			count = count + ft_parser(format, index, parameters);
		}
		else
		{
			ft_putchar(format[index]);
			count++;
		}
		index++;
	}
	va_end(parameters);
	return (count);
}
