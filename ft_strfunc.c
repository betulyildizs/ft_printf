/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:02:44 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/15 15:25:36 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_countdigit(unsigned int num)
{
    unsigned int c;

	c= 0;
    if (num == 0) 
		return 1;
    while (num != 0)
    {
        num /= 10;
        c++;
    }
    return (c);
}

void	ft_printchr(char by)
{
	write(1, &by, 1);
}

size_t	ft_printstr(const char *by)
{
	while (*by)
	{
		write(1, &by, 1);
		by++;
	}
	return (ft_strlen(by));
}

size_t	ft_strlen(const char *by)
{
	size_t	i;

	i = 0;
	while (by[i] != '\0')
		i++;
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

char	*ft_strdup(const char *str)
{
	char	*string;

	string = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (string == NULL)
		return (0);
	ft_strlcpy(string, str, ft_strlen(str) + 1);
	return (string);
}
