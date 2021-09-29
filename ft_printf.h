/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:08:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/09/29 15:23:38 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h> // lib pour write

int     ft_printf(const char *format, ...);
void    ft_putchar(char c);
void    ft_putstr(char *s);
void    ft_putnbr(int n);

typedef struct s_printf
{
    va_list parameters;
}               t_printf;

#endif