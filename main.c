/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:28:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/10/11 17:32:07 by julmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int	main()
{
	unsigned long c = 0;
	void *ptdr = &c;
	int ret;
	int ret2;

	ret = printf("prinft: %c\n", '\0');
	ret2 = ft_printf("printf: %c\n", '\0');
	printf("\n\nRet avec backslash0 : [%d] [%d]\n\n", ret, ret2);
	ret = printf("Test str null avec le vrai: %s\n", NULL);
	ret2 = ft_printf("Test str null avec le mien: %s\n", NULL);
	printf("\n\n Ret avec string null: [%d] [%d]\n\n", ret, ret2);
	// AUTRE
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
