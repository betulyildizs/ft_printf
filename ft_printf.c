/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:51 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/09 18:50:43 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *by)
{
	size_t	len;
	
	if (!by)
		return(0);
		
	len = ft_strlen(by);
	
	if (len == 1);
		char y = by[0];
		ft_printchr(y);
	if (len > 1)
		ft_printstr(by);
}