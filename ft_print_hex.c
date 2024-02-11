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
			ft_putchar_fd((nbr + '0'), 1);
		else
		{
			if (str == 'x')
				ft_putchar_fd((nbr - 10 + 'a'), 1);
			if (str == 'X')
				ft_putchar_fd((nbr - 10 + 'A'), 1);
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
