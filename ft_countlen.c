/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:15:57 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/19 16:17:27 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_countdigit(unsigned int nbr)
{
	unsigned int	c;

	c = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= 10;
		c++;
	}
	return (c);
}

unsigned int	ft_counthexdig(unsigned long num)
{
	unsigned int	count;

	count = 0;
	while (num != 0)
	{
		num /= 16;
		count++;
	}
	return (count);
}
