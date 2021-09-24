/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:36:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/09/24 15:08:50 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <starg.h> // lib pour macro va_list, va_start, va_arg, va_end, va_copy 
#include <stdlib.h> // lib pour malloc et free 
#include <unistd.h> // lib pour write
#include "../LIBFT/libft.h"

void    ft_putchar(char c)
{
    write(fd, &c, 1);
}

int ft_printf(const char *format, ...)
{
    va_list parameters;
    va_start (parameters, format);
    va_end (parameters);
    int i;

    i = 0;
    while(format)
   {
       ft_putchar(format[i]); // tant que j'ai pas un % je print 
       i++;
        if (format[i] == '%')
        {
            i++; // je skip le % pour voir le format demande    
            if (i == 'c')
             // ft_putchar 
          if (i == 's')
          // ft_putstr
          if (i == 'p')
          // ft_itoa
          if (i == 'd')
          // ft_putnbr
          if (i == 'u')
          //ft_putnbr
          if (i == 'x')
          // ft_itoa 
    }
   } 
}


/* formats à gérer : 
c = va_arg(args, int)
s = va_arg(args, char *)
d = va_arg(args, int)
i = va_arg(args, int)s
u = va_arg(args, unsigned int)
p = (unsigned long)va_arg(args, void *);
x = va_arg(args, unsigned int)
X = va_arg(args, unsigned int)

1 -essaie de comprendre comment fonctionne les arguments va_arg avec stdarg.
2 - essaie de faire une fonction pour chaque flag qu'ils demandent (%c tu fais un ft_putchar, %s, putstr, %d putnbr, %x hexa etc..)
3 - petit parseur dès que tu vois un %* tu utilise la fonction adéquate
4 - return le nombre de caractères affichés

// Faire une structure (cf LIBFT)

/// Pour conversion en hexa utiliser ITOA 
/// Pour conversion en decimal, creer une fonction pour conversion en base 10
