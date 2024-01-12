/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:51 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/12 19:45:50 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *by, ...)
{
	va_list	arg;
	size_t	len;
	size_t	i;
	
	i = 1;
	len = ft_strlen(by);
	if (!by)
		return (0);
	va_start(arg, by);
	ft_datatype(by, len, i);
	va_end(arg);
}
