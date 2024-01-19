/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_datatype.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:20:47 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/19 16:32:53 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_datatype(va_list arg, const char *by, size_t len, int i)
{
	if (by[i] == 'c' || by[i] == '%')
	{
		if (by[i] == '%')
		{
			ft_printchr('%');
		}
		else
			ft_printchr(va_arg(arg, int));
		len--;
	}
	else if (by[i] == 's')
		len += (ft_printstr(va_arg(arg, const char *)) - 2);
	else if (by[i] == 'd' || by[i] == 'i')
		len += (ft_printnbr(va_arg(arg, int)) - 2);
	else if (by[i] == 'u')
		len += (ft_printunsigned(va_arg(arg, unsigned int)) - 2);
	else if (by[i] == 'p')
		len += (ft_printptr(va_arg(arg, void *)) - 2);
	else if (by[i] == 'x' || by[i] == 'X')
		len += (ft_printhex(va_arg(arg, unsigned long), va_arg(arg, int)) - 2);
	return (len);
}
