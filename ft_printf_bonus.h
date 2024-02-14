/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:42:13 by beyildiz          #+#    #+#             */
/*   Updated: 2024/02/14 19:20:21 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdarg.h>

typedef struct s_flags
{
	int		zero;
	int		minus;
	int		width;
	int		precision;
	int		star;
	int		type;
	int		percent;
	int 	sharp;
}				t_flags;

#endif