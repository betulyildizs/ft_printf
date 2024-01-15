/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_datatype.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:20:47 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/15 15:25:04 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_datatype(va_list arg, const char *by, size_t len)
{
	unsigned int	i;

	i = 0;
	if (by[i] == 's')
		len += ft_printstr(va_arg(arg, char *));
	else if (by[i] == 'd' || by[i] == 'i' || by[i] == 'u')
	{
		if (by[i] >= '0')
			len += ft_printunsigned(va_arg(arg, unsigned int));
		else
			len += ft_printnbr(va_arg(arg, int));
	}
	else if (by[i] == 'c' || by[i] == '%')
	{
		ft_printchr(va_arg(arg, int));
		len++;
	}
	else if (by[i] == 'p')
		ft_printptr(va_arg(arg, void *));
	else if (by[i] == 'x' || by[i] == 'X')
		len += ft_printhex(va_arg(arg, unsigned int));
	return (len);
}
