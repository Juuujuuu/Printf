/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:36:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/09/27 18:47:51 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h> // lib pour macro va_list, va_start, va_arg, va_end, va_copy 
#include <stdlib.h> // lib pour malloc et free 

int ft_printf(const char *format, ...)
{
    va_list parameters;
    va_start (parameters, format);
    
    int i;

    i = 0;
    while(format)
   {
       if (format[i] != '%')
        {
            ft_putchar(format[i]); // tant que j'ai pas un % je print 
            i++;
        }
        if (format[i] == '%')
        {
            conversion()
            i++; // je skip le % pour voir le format demande    
          
        }
   }
   va_end (parameters);
   return (0);
}


/* formats à gérer : 
c = va_arg(parameters, int)
s = va_arg(parameters, char *)
d = va_arg(parameters, int)
i = va_arg(parameters, int)
u = va_arg(parameters, unsigned int)
p = (unsigned long)va_arg(parameters, void *);
x = va_arg(parameters, unsigned int)
X = va_arg(parameters, unsigned int)

1 -essaie de comprendre comment fonctionne les arguments va_arg avec stdarg.
2 - essaie de faire une fonction pour chaque flag qu'ils demandent (%c tu fais un ft_putchar, %s, putstr, %d putnbr, %x hexa etc..)
3 - petit parseur dès que tu vois un %* tu utilise la fonction adéquate
4 - return le nombre de caractères affichés

// Faire une structure (cf LIBFT)

/// Pour conversion en hexa utiliser ITOA 
/// Pour conversion en decimal, creer une fonction pour conversion en base 10
