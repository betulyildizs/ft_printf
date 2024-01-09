/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printby.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:20:34 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/09 18:42:29 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchr(char y)
{
	write(1, &y, 1);
}

void	ft_printstr(char *by)
{
	while(*by)
	{
		write(1, &by, 1);
		by++;
	}
}
