/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:44:20 by beyildiz          #+#    #+#             */
/*   Updated: 2024/02/08 19:35:54 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

unsigned int	ft_countdigit(int nbr);
int				ft_datatype(va_list arg, const char *format, int i);
int				ft_index_cont(va_list arg, const char *format);
int				ft_printf(const char *format, ...);
size_t			ft_printhexup(unsigned int format);
size_t			ft_strlen(const char *by);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
int				ft_printunsigned(unsigned int format);
int				ft_printchr(int format);
int				ft_printstr(char *format);
int				ft_printptr(unsigned long long ptr);
size_t			ft_printnbr(int format);
void			ft_putptr(uintptr_t nbr);
int				ft_ptrlen(uintptr_t nbr);
void			ft_putchar_fd(char c, int fd);
int				ft_printunsigned(unsigned int by);
int 			ft_countuns(unsigned int by);
int				ft_printhex(unsigned int num, const char str);
void			ft_puthex(unsigned int num, const char str);
int				ft_hexlen(unsigned	int num);

#endif
