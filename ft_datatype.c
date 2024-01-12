/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_datatype.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 17:20:47 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/12 19:08:36 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_datatype(va_list arg, char *by, int len)
{
	unsigned int	i;

	i = 1;
	while (by[i])
	{
		if (by[i] == 'c' || by[i] == 's' || by[i] == '%')
			ft_printstr(va_arg(arg, char *));
		else if (by[i] == 'd' || by[i] == 'i' || by[i] == 'u')
		{
			if (by >= 0)
				ft_printunsigned(va_arg(arg, unsigned int));
			else
				ft_printnbr(va_arg(arg, int));
		}
		else if (by[i] == 'p')
			ft_printptr(va_arg(arg, void *));
		else if (by[i] == 'x')
			ft_printhex(va_arg(arg, unsigned int));
		else if (by[i] == 'X')
			ft_printhexup(va_arg(arg, unsigned int));
		i++;
	}
}
