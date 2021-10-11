/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:29:07 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/11 17:29:10 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(int n)
{
	long long	nb;
	long long	neg;
	int			count;

	count = 1;
	neg = 4294967296;
	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		nb = neg - nb;
	}
	if (nb >= 10)
	{
		count = ft_unsigned(nb / 10);
		count++;
	}
	ft_putchar(nb % 10 + '0');
	return (count);
}

int	ft_putnbr_hexa_min(int n)
{
	long long	neg;
	long long	nb;
	int			count;

	neg = 4294967296;
	nb = n;
	count = 1;
	if (nb < 0)
	{
		nb = -nb;
		nb = neg - nb;
	}
	if (nb > 15)
	{
		count = ft_putnbr_hexa_min(nb / 16);
		count++;
	}
	if ((nb % 16) <= 9)
		ft_putchar(nb % 16 + 48);
	if ((nb % 16) > 9)
		ft_putchar(nb % 16 + 87);
	return (count);
}

int	ft_putnbr_hexa_maj(int n)
{
	long long	neg;
	long long	nb;
	int			count;

	neg = 4294967296;
	nb = n;
	count = 1;
	if (nb < 0)
	{
		nb = -nb;
		nb = neg - nb;
	}
	if (nb > 15)
	{
		count = ft_putnbr_hexa_maj(nb / 16);
		count++;
	}
	if ((nb % 16) <= 9)
		ft_putchar(nb % 16 + 48);
	if ((nb % 16) > 9)
		ft_putchar(nb % 16 + 55);
	return (count);
}

int	ft_putnbr_hexa_pointer(unsigned long n)
{
	unsigned long	nb;
	int				count;

	nb = n;
	count = 1;
	if (nb > 15)
	{
		count = ft_putnbr_hexa_pointer(nb / 16);
		count++;
	}
	if ((nb % 16) <= 9)
		ft_putchar(nb % 16 + 48);
	if ((nb % 16) > 9)
		ft_putchar(nb % 16 + 87);
	return (count);
}
