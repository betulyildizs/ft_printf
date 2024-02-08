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

int	ft_printnbr(int by)
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

int	ft_printunsigned(unsigned int by)
{
	if (by >= 10)
	{
		ft_printnbr(by / 10);
	}
	ft_printchr(by % 10 + '0');
	return (ft_countdigit(by));
}
