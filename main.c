/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:28:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/11 10:49:19 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int main()
{
    char c;
    void *ptdr = &c;

    printf("Le vrai printf avec c: %c %c %c\n", '0', '0', '1');
    ft_printf("Mon printf avec c: %c %c %c\n", '0', '0', '1');
    printf("Test avec le vrai %c%c%c*\n", '\0', '1', 1);
    ft_printf("Test avec le mien %c%c%c*\n", '\0', '1', 1);
    printf("Le vrai printf avec d: %d\n", 4202);
    ft_printf("Mon printf avec d: %d\n", 4202);
    printf("Le vrai printf avec i: %i\n", INT_MIN);
    ft_printf("Mon printf avec i: %i\n", INT_MIN);
    printf("Le vrai printf avec u: %u\n", 1000);
    ft_printf("Mon printf avec u : %u\n", 1000);
    printf("Le vrai printf avec s: %s\n", "le chat est beau");
    ft_printf("Mon printf avec s: %s\n", "le chat est beau");
    printf("Le vrai printf avec p: %p\n", ptdr);
    ft_printf("Mon printf avec p: %p\n", ptdr);
    printf("Le vrai printf avec x: %x\n", -10);
    ft_printf("Mon printf avec x: %x\n", -10);
    printf("Le vrai printf avec X: %X\n", -10);
    ft_printf("Mon printf avec X: %X\n", -10);
}