/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:33:36 by beyildiz          #+#    #+#             */
/*   Updated: 2024/02/11 14:53:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nbr, const char str)
{
	if (nbr >= 16)
	{
		ft_puthex(nbr / 16, str);
		ft_puthex(nbr % 16, str);
	}
	else
	{
		if (nbr <= 9)
			ft_printchr(nbr + '0');
		else
		{
			if (str == 'x')
				ft_printchr((nbr - 10) + 'a');
			if (str == 'X')
				ft_printchr((nbr - 10) + 'A');
		}
	}
}

int	ft_printhex(unsigned int nbr, const char str)
{
	if (nbr == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(nbr, str);
	return (ft_hexlen(nbr));
}
