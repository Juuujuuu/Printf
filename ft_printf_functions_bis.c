/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions_bis.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:32:35 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/11 17:12:53 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex_min(va_list parameters)
{
	unsigned int	x;
	int				count;

	count = 0;
	x = va_arg(parameters, unsigned int);
	count = ft_putnbr_hexa_min(x);
	return (count);
}

int	ft_printhex_maj(va_list parameters)
{
	unsigned int	x;
	int				count;

	count = 0;
	x = va_arg(parameters, unsigned int);
	count = ft_putnbr_hexa_maj(x);
	return (count);
}

int	ft_printpointer(va_list parameters)
{
	unsigned long	p;
	int				count;

	count = 0;
	p = (unsigned long)va_arg(parameters, void *);
	ft_putstr("0x");
	count = 2 + ft_putnbr_hexa_pointer(p);
	return (count);
}

int	ft_printunsigned(va_list parameters)
{
	unsigned int	u;
	int				count;

	count = 0;
	u = va_arg(parameters, unsigned int);
	count = ft_unsigned(u);
	return (count);
}
