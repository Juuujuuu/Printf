/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmarti <julmarti@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:36:05 by julmarti          #+#    #+#             */
/*   Updated: 2021/09/30 17:20:33 by julmarti         ###   ########.fr       */
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
void    ft_unsigned(int n)
{
    long long nb;
    long long neg;

    neg = 4294967296;
    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        nb = neg - nb;
    }
    if (nb >= 10)
        ft_unsigned(nb / 10);
    ft_putchar(nb % 10 + '0');
}

void    ft_putnbr_hexa_min(int n)
{
    long long neg; 
    long long nb;

    neg = 4294967296;
    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        nb = neg - nb;
    }
    if (nb > 15)
		ft_putnbr_hexa_min(nb / 16);
	if ((nb % 16) <= 9) // si le reste de la division par 16 est inférieur à 10, alors c'est un chiffre
		ft_putchar(nb % 16 + 48);
	if ((nb % 16) > 9) // si le reste de la divsion par 16 est supérieur à 9,alors c'est une lettre
		ft_putchar(nb % 16 + 87);
}

void    ft_putnbr_hexa_maj(int n)
{
    long long neg; 
    long long nb;

    neg = 4294967296;
    nb = n;
    if (nb < 0)
    {
        nb = -nb;
        nb = neg - nb;
    }
    if (nb > 15)
		ft_putnbr_hexa_min(nb / 16);
	if ((nb % 16) <= 9) // si le reste de la division par 16 est inférieur à 10, alors c'est un chiffre
		ft_putchar(nb % 16 + 48);
	if ((nb % 16) > 9) // si le reste de la divsion par 16 est supérieur à 9,alors c'est une lettre
		ft_putchar(nb % 16 + 87);
}

void    ft_pointer_hexa(int n)
{
	unsigned long nb;
	unsigned long neg;

	neg = 4294967296;
	nb = n;
	if (n < 0)
	{
		nb = -nb;
		nb = neg - nb;
	}
	if (nb > 15)
		ft_pointer_hexa(nb / 16);
	if ((nb % 16) <= 9)
		ft_putchar(nb % 16 + 48);
	if ((nb % 16) > 9)
		ft_putchar(nb % 16 + 87);
}

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
                ft_pointer_hexa(p);
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
1 - comprendre la conversion decimale <-> hexadecimale 
2 _ Faire un ft_putnbr hexadecimal MAJ et MIN

Rappel : En utilisant l’Hexadécimal (16) 
je vais effectuer une suite de division par 16 jusqu’à avoir un résultat nul.
Je vais utiliser la division avec reste, ou modulo.
https://www.laintimes.com/calculer-en-hexadecimal-base-16/

2 - Faire une fonction pour les flags restants (p, d). ITOA ? 
3 - Decouper et organiser le code pour respecter la norme 
4 - Tester avec pleins de valeurs

// Cette fonction permet de retourner le nb de caracteres affiches 
*/
