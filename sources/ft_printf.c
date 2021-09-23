/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:36:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/09/23 23:29:19 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <starg.h> // lib pour macro va_start, va_arg, va_end, va_copy 
#include <stdlib.h> // lib pour malloc et free 
#include <unistd.h> // lib pour write

int ft_printf(const char *, ...)
{
    // tant que je n'ai pas un %, je print ce qui est lu

    // if j'ai un %, je print une variable

    // lister les cases
}

/* formats à gérer : %c, %s, %p, %d, %i, %u, %x, %%

c = va_arg(args, int)
s = va_arg(args, char *)
d = va_arg(args, int)
i = va_arg(args, int)
u = va_arg(args, unsigned int)
p = va_arg(args, unsigned long)# or 
                               #(unsigned long)va_arg(args, void *);
x = va_arg(args, unsigned int)
X = va_arg(args, unsigned int)

*/
