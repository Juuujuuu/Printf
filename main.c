/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:28:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/09/27 18:32:24 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
    printf("Le vrai printf : %d\n", 42);
    ft_printf("Mon printf : %d\n", 42);
    printf("Le vrai printf : %s\n", "le chat est beau");
    ft_printf("Mon printf : %s\n", "le chat est beau");
}