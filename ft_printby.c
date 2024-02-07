/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printby.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:20:34 by beyildiz          #+#    #+#             */
/*   Updated: 2024/02/07 19:37:06 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printnbr(int by)
{
	if (by == -2147483648)
	{
		ft_printstr("-2147483648");
	}
	else if (by < 0)
	{
		ft_printchr('-');
		ft_printchr(by);
	}
	else if (by >= 10)
	{
		ft_printnbr(by / 10);
		ft_printchr(by % 10 + '0');
	}
	else
		ft_printchr(by + '0');
	return (ft_countdigit(by));
}

size_t	ft_printunsigned(unsigned int by)
{
	if (by >= 10)
	{
		ft_printnbr(by / 10);
	}
	ft_printchr(by % 10 + '0');
	return (ft_countdigit(by));
}

size_t	ft_printptr(void *by)
{
	unsigned long	nbr;

	nbr = (unsigned long)by;
	ft_printhex(nbr, 0);
	return (ft_strlen((char *)by));
}

size_t	ft_printhex(unsigned long num, int uppercase)
{
    if (num >= 16)
	{
    	ft_printhex(num / 16, uppercase);
	}
	if (num % 16 < 10)
	{
		ft_printchr((num % 16) + '0');
	}
	else
	{
		if (uppercase)
        	ft_printchr((num % 16) - 10 + 'A');
		else
            ft_printchr((num % 16) - 10 + 'a');
    }
	return (ft_counthexdig(num));
}
