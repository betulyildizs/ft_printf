/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:51 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/15 18:09:15 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *by, ...)
{
	va_list			arg;
	size_t			len;
	int				i;

	i = 0;
	if (!by)
		return (0);
	len = ft_strlen(by);
	va_start(arg, by);
	while (by[i] != '\0')
	{
		if (by[i] == '%')
		{
			i++;
			len = ft_datatype(arg, by, len, i);
		}
		else
			ft_printchr(by[i]);
			i++;
	}
	va_end(arg);
	return (len);
}
