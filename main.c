/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:28:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/06 13:23:55 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
    int abc;
     void *ptdr = &abc;

    printf("Le vrai printf avec c: %c %c %c\n", '0', '0', '1');
    ft_printf("Mon printf avec c: %c %c %c\n", '0', '0', '1');
    printf("Le vrai printf avec d: %d\n", -42);
    ft_printf("Mon printf avec d: %d\n", -42);
    printf("Le vrai printf avec i: %i\n", -42);
    ft_printf("Mon printf avec i: %i\n", -42);
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
    printf ("Le vrai printf avec %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%% \n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    ft_printf(" Mon printf avec %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%% \n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
}