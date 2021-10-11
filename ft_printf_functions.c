/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:43:25 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/11 17:30:34 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(va_list parameters)
{
	char	c;
	int		count;

	count = 0;
	c = va_arg(parameters, int);
	ft_putchar(c);
	count++;
	return (count);
}

int	ft_printstr(va_list parameters)
{
	char	*s;
	int		count;

	count = 0;
	s = va_arg(parameters, char *);
	if (s == NULL)
	{
		ft_putstr("(null)");
		count = 6;
	}
	else
	{
		ft_putstr(s);
		count = ft_strlen(s);
	}
	return (count);
}

int	ft_printnumber(va_list parameters)
{
	int	d;
	int	count;

	count = 0;
	d = va_arg(parameters, int);
	if (d < 0)
		count = ft_putnbr(d) + 1;
	else
		count = ft_putnbr(d);
	return (count);
}
