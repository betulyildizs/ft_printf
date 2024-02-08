/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:02:44 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/29 19:25:54 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printstr(char *by)
{
	int i;

	i = 0;
	if (!by)
		return (ft_printstr("(null)"));
	while (by[i] != '\0')
	{
		ft_printchr(by[i]);
		i++;
	}
	return (i);
}

int	ft_strlen(const char *by)
{
	size_t	i;

	i = 0;
	if (!by)
		return (2);
	while (by[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			lenght;

	lenght = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (lenght);
}

size_t	ft_printhexup(unsigned int by)
{
	if (by >= 16)
	{
		ft_printhexup(by / 16);
		ft_printhexup(by % 16);
	}
	else if (by < 10)
		ft_printchr(by + '0');
	else
		ft_printchr(by - 10 + 'A');
	return (ft_counthexdig(by));
}
