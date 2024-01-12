/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printby.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:20:34 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/12 19:28:09 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhexup(unsigned int by)
{
	if (by >= 16)
	{
		ft_printhex(by / 16);
		ft_printhex(by % 16);
	}
	else if (by < 10)
		ft_printstr(by + '0');
	else
		ft_printstr(by - 10 + 'A');
}

void	ft_printnbr(int by)
{
	if (by == -2147483648)
	{
		ft_printstr("-2147483648");
	}
	else if (by < 0)
	{
		ft_printstr('-');
		ft_printstr(by);
	}
	else if (by >= 10)
	{
		ft_printnbr(by / 10);
		ft_printstr(by % 10 + '0');
	}
	else
		ft_printstr(by + '0');
}

void	ft_printunsigned(unsigned int by)
{
	if (by >= 10)
	{
		ft_printnbr(by / 10);
		ft_printstr(by % 10 + '0');
	}
	else
		ft_printstr(by + '0');
}

void	ft_printptr(void *ptr)
{
	char			*str;
	unsigned int	i;

	str = (char *)ptr;
	ft_strdup(str);
	i = 0;
	ft_printstr(str);
}

void	ft_printhex(unsigned int by)
{
	if (by >= 16)
	{
		ft_printhex(by / 16);
		ft_printhex(by % 16);
	}
	else if (by < 10)
		ft_printstr(by + '0');
	else
		ft_printstr(by - 10 + 'a');
}
