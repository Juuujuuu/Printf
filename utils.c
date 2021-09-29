/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:04:04 by julmarti          #+#    #+#             */
/*   Updated: 2021/09/29 15:24:30 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

void    ft_putchar(char c)
{
    write(fd, &c, 1);
}

void    ft_putstr(char *s)
{
    int i;
    
    i = 0;
    if (!s)
        return(NULL);
    while (s[i])
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