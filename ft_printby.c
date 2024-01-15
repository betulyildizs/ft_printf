/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printby.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:20:34 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/15 15:24:13 by beyildiz         ###   ########.fr       */
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
		ft_printchr(by % 10 + '0');
	}
	else
		ft_printchr(by + '0');
	return (ft_countdigit(by));
}

size_t	ft_printptr(void *ptr)
{
	char			*str;
	unsigned int	i;

	str = (char *)ptr;
	ft_strdup(str);
	i = 0;
	ft_printstr(str);
	return (ft_strlen(str));
}

size_t	ft_printhex(unsigned int by)
{
	if (by >= 16)
	{
		ft_printhex(by / 16);
		ft_printhex(by % 16);
	}
	else if (by < 10)
		ft_printchr(by + '0');
	else
		ft_printchr(by - 10 + 'a');
	return (ft_countdigit(by));
}
