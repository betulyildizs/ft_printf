/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:33:36 by beyildiz          #+#    #+#             */
/*   Updated: 2024/02/08 19:35:21 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int num, const char str)
{
	if (num >= 16)
	{
		ft_puthex(num / 16, str);
		ft_puthex(num % 16, str);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (str == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (str == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_printhex(unsigned int num, const char str)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(num, str);
	return (ft_hexlen(num));
}
