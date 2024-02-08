/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:15:57 by beyildiz          #+#    #+#             */
/*   Updated: 2024/02/08 19:35:30 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_countdigit(int nbr)
{
	unsigned int	c;

	c = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		c++;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		c++;
	}
	return (c);
}

int	ft_hexlen(unsigned	int nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 16;
	}
	return (len);
}

int ft_countuns(unsigned int by)
{
	int count;

	count = 0;
	while (by != 0)
	{
		by /= 10;
		count++;
	}
	return (count);
}
