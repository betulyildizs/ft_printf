/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:37:51 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/09 19:13:42 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *by)
{
	size_t	len;
	char y;
	int i = 0;
	
	if (!by)
		return(0);
		
	len = ft_strlen(by);
	
	if (len == 1)
	{
		y = by[0];
		ft_printchr(y);
	}
	else
		ft_printstr(by);
	return(i);
}
int main()
{
	char *by = "a";
	ft_printf(by);
	
}