/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:08:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/09/27 17:51:03 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>

int ft_printf(const char *format, ...);
void    ft_putchar(char c);
void    ft_putstr(char *s);
void    ft_putnbr(int n);

typedef struct s_printf
{
    va_list parameters;
}               t_printf;


#endif