/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:44:20 by beyildiz          #+#    #+#             */
/*   Updated: 2024/01/19 16:39:34 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

unsigned int	ft_countdigit(unsigned int nbr);
unsigned int	ft_counthexdig(unsigned long num);
int				ft_datatype(va_list arg, const char *by, size_t len, int i);
size_t			ft_printhexup(unsigned int by);
int				ft_printf(const char *by, ...);
size_t			ft_strlen(const char *by);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_printunsigned(unsigned int by);
size_t			ft_printhex(unsigned long num, int uppercase);
size_t			ft_printstr(const char *by);
size_t			ft_printptr(void *by);
void			ft_printchr(int by);
size_t			ft_printnbr(int by);

#endif
