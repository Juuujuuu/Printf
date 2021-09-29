/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:36:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/09/29 18:02:30 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h> // lib pour macro va_list, va_start, va_arg, va_end, va_copy 
#include <stdlib.h> // lib pour malloc et free 


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

int ft_printf(const char *format, ...)
{
    va_list parameters;
    va_start (parameters, format);
    
    int j;
    int d;
    char c;
    char *s;
    unsigned int u;
    unsigned int x;

    j = 0;
    while(format[j] != '\0')
   {
       if (format[j] != '%')
        {
            ft_putchar(format[j]); // tant que j'ai pas un % je print 
            j++;
        }
        if (format[j] == '%')
        {
            j++; // je skip le signe % 
            if (format[j] == 'c') 
            {
                c = va_arg(parameters, int);
                ft_putchar(c);
                j++;
            }
            if (format[j] == 's')
            {
                s = va_arg(parameters, char *);
                ft_putstr(s);
                j++;
            }
            if (format[j] == 'd' || format[j] == 'i')
            {
                d = va_arg(parameters, int);
                ft_putnbr(d);
                j++;
            }
            if (format[j] == 'u') // decimal non signe - valeur max de 4294967295
            {
                u = va_arg(parameters, unsigned int);
                //fonction a creer 
                j++;
            }
            if (format[j] == 'p') // void* en hexadecimal
            {
                p = (unsigned long)va_arg(parameters, void *);
                //fonction a creer 
                j++;
            }
            if (format[j] == 'x' || format[j] == 'X') // hexadecimal non signe - x -> abcdef || X -> ABCDEF
            {
                x = va_arg(parameters, unsigned int);
                //fonction a creer
                j++;
            }
        }
   }
   va_end (parameters);
   return (j);
}



/*

TO DO : 
1 - comprendre la conversion decimale <-> hexadecimale 
2 - Faire une fonction pour les flags restants (p, x, X, u). ITOA ? 
3 - Decouper et organiser le code pour respecter la norme 
4 - Tester avec pleins de valeurs

// Cette fonction permet de retourner le nb de caracteres affiches 
*/
