/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:44:20 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/12 19:45:37 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>

int		ft_printf(const char *by, ...);
size_t	ft_strlen(const char *by);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	ft_datatype(va_list arg, const char *by, size_t i);
void	ft_printunsigned(unsigned int by);
void	ft_printhexup(unsigned int by);
void	ft_printhex(unsigned int by);
void	ft_printstr(const char *by);
void	ft_printptr(void *by);
void	ft_printnbr(int by);
char	*ft_strdup(const char *str);

#endif
