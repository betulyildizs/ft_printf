/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:02:44 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/15 18:24:29 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_countdigit(unsigned int nbr)
{
    unsigned int c;

	c = 0;
    if (nbr == 0) 
		return 1;
    while (nbr != 0)
    {
        nbr /= 10;
        c++;
    }
    return (c);
}

size_t	ft_printstr(const char *by)
{
	unsigned int	i;

	i = 0;
	while (by[i] != '\0')
	{
		write(1, &by[i], 1);
		i++;
	}
	return (ft_strlen(by));
}

size_t	ft_strlen(const char *by)
{
	size_t	i;

	i = 0;
	while (by[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
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
	return (ft_countdigit(by));
}
