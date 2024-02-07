/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:44:20 by beyildiz          #+#    #+#             */
/*   Updated: 2024/02/07 19:37:41 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

unsigned int	ft_countdigit(unsigned int nbr);
unsigned int	ft_counthexdig(unsigned long num);
int				ft_datatype(va_list arg, const char *format, int i);
int				ft_index_cont(va_list arg, const char *format);
int				ft_printf(const char *format, ...);
size_t			ft_printhexup(unsigned int format);
size_t			ft_strlen(const char *by);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_printunsigned(unsigned int format);
size_t			ft_printhex(unsigned long num, int uppercase);
size_t			ft_printptr(void *format);
int				ft_printchr(int format);
int				ft_ifcond(va_list arg, const char *format, int i, int printed);
int				ft_printstr(char *format);
size_t			ft_printnbr(int format);

#endif
