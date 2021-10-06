/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:36:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/06 13:17:14 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list parameters;
    va_start (parameters, format);
    
    int index;
    int d;
    char c;
    char *s;
    unsigned int u;
    unsigned int x;
    unsigned int X;
    unsigned long p;

    index = 0;
    while(format[index] != '\0')
   {
       if (format[index] != '%')
        {
            ft_putchar(format[index]); // tant que index'ai pas un % je print 
            index++;
        }
        if (format[index] == '%')
        {
            index++; // je skip le signe % 
            if (format[index] == '%')
            {
                ft_putchar('%');
                index++;
            }
            if (format[index] == 'c') 
            {
                c = va_arg(parameters, int);
                ft_putchar(c);
                index++;
            }
            if (format[index] == 's')
            {
                s = va_arg(parameters, char *);
                ft_putstr(s);
                index++;
            }
            if (format[index] == 'd' || format[index] == 'i')
            {
                d = va_arg(parameters, int);
                ft_putnbr(d);
                index++;
            }
            if (format[index] == 'u') // decimal non signe - valeur max de 4294967295
            {
                u = va_arg(parameters, unsigned int);
                ft_unsigned(u);
                index++;
            }
            if (format[index] == 'p') // void* en hexadecimal
            {
                p = (unsigned long)va_arg(parameters, void *);
                ft_putstr("0x7fff");
                ft_putnbr_hexa_min(p);
                index++;
            }
            if (format[index] == 'x') // hexadecimal non signe - x -> abcdef
            {
                x = va_arg(parameters, unsigned int);
                ft_putnbr_hexa_min(x);
                index++;
            }
            if (format[index] == 'X') // hexadecimal non signe - X -> ABCDEF
            {
                X = va_arg(parameters, unsigned int);
                ft_putnbr_hexa_maj(X);
                index++;
            }
        }
    }
    va_end (parameters);
    return (index);
}

/*
TO DO : 
1 - Refaire la fonction pour X 

Rappel : En utilisant l’Hexadécimal (16) 
je vais effectuer une suite de division par 16 jusqu’à avoir un résultat nul.
Je vais utiliser la division avec reste, ou modulo.
https://www.laintimes.com/calculer-en-hexadecimal-base-16/

3 - Faire une fonction pour les flags restants (p, d). ITOA ? 
4 - Decouper et organiser le code pour respecter la norme 
5 - Tester avec pleins de valeurs


Source : https://perso.liris.cnrs.fr/raphaelle.chaine/COURS/LIFAP6/printf_form.html

// Cette fonction permet de retourner le nb de caracteres affiches 
*/
