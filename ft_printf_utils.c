/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:04:04 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/06 18:31:11 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *s)
{
    int i;
    
    i = 0; 
    while (s[i] != '\0')
    {
        ft_putchar(s[i]);
        i++;
    }
}
void    ft_putnbr(int n)
{
    if (n == -2147483648)
        ft_putstr("-2147483648");
    else 
    {
        if (n < 0)
        {
            ft_putchar('-');
            n = -n;
        }
        if (n >= 10)
            ft_putnbr(n / 10);
        ft_putchar(n % 10 + '0');
    }
}
void    ft_unsigned(int n)
{
    long long nb;
    long long neg;

    neg = 4294967296;
    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        nb = neg - nb;
    }
    if (nb >= 10)
        ft_unsigned(nb / 10);
    ft_putchar(nb % 10 + '0');
}

void    ft_putnbr_hexa_min(int n)
{
    long long neg; 
    long long nb;

    neg = 4294967296;
    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        nb = neg - nb;
    }
    if (nb > 15)
		ft_putnbr_hexa_min(nb / 16);
	if ((nb % 16) <= 9) // si le reste de la division par 16 est inférieur à 10, alors c'est un chiffre
		ft_putchar(nb % 16 + 48);
	if ((nb % 16) > 9) // si le reste de la divsion par 16 est supérieur à 9,alors c'est une lettre
		ft_putchar(nb % 16 + 87);
}

void    ft_putnbr_hexa_maj(int n)
{
    long long neg; 
    long long nb;

    neg = 4294967296;
    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        nb = neg - nb;
    }
    if (nb > 15)
		ft_putnbr_hexa_maj(nb / 16);
	if ((nb % 16) <= 9) 
		ft_putchar(nb % 16 + 48);
	if ((nb % 16) > 9) 
		ft_putchar(nb % 16 + 55);
}