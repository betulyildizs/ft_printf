/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:51 by beyildiz          #+#    #+#             */
/*   Updated: 2024/02/11 14:52:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		len;

	if (!format)
		return (0);
	va_start(arg, format);
	len = ft_index_cont(arg, format);
	va_end(arg);
	return (len);
}

int	ft_index_cont(va_list arg, const char *format)
{
	int	i;
	int	printed;

	printed = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			printed += ft_datatype(arg, format, i);
		}
		else
			printed += ft_printchr(format[i]);
		i++;
	}
	return (printed);
}
