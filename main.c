/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:28:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/09/30 17:09:32 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
    int a;
     void *ptdr = &a;

    printf("Le vrai printf : %c\n", 'a');
    ft_printf("Mon printf : %c\n", 'a');
    printf("Le vrai printf : %d\n", 42);
    ft_printf("Mon printf : %d\n", 42);
    printf("Le vrai printf : %i\n", 42);
    ft_printf("Mon printf : %i\n", 42);
    printf("Le vrai printf : %u\n", 10);
    ft_printf("Mon printf : %u\n", 10);
    printf("Le vrai printf : %s\n", "le chat est beau");
    ft_printf("Mon printf : %s\n", "le chat est beau");
    printf("Le vrai printf : %p\n", ptdr);
    ft_printf("Mon printf : %p\n", ptdr);
    printf("Le vrai printf : %x\n", -10);
    ft_printf("Mon printf : %x\n", -10);
    printf("Le vrai printf : %X\n", -10);
    ft_printf("Mon printf : %X\n", -10);
}