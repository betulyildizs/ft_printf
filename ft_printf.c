/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:51 by beyildiz          #+#    #+#             */
/*   Updated: 2024/02/07 19:28:35 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_printchr(int format)
{
	write(1, &format, 1);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list			arg;
	int				len;

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
			printed = ft_ifcond(arg, format, i, printed);
		else
			printed += ft_printchr(format[i]);
		i++;
	}
	return (printed);
}

int	ft_ifcond(va_list arg, const char *format, int i, int printed)
{
	if (format[i + 1] == 'd' || format[i + 1] == 'i'
		|| format[i + 1] == 'u'
		|| format[i + 1] == 'x' || format[i + 1] == 'X'
		|| format[i + 1] == 'p' || format[i + 1] == 's'
		|| format[i + 1] == 'c')
	{
		printed += ft_datatype(arg, format, i + 1);
	}
	else
		printed += ft_printchr(format[i]);
	return (printed);
}
