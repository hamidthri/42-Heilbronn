/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:01:01 by htaheri           #+#    #+#             */
/*   Updated: 2023/04/20 13:13:35 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "unistd.h"
# include "stdarg.h"

int		ft_printf(const char *format, ...);
void	ft_putchr(char c, int *len);
void	ft_putstr(char *str, int *len);
void	ft_putnbr(int num, int *len);
void	ft_putnbr_u(unsigned int num, int *len);
void	ft_puthex(size_t n, int mode, int *len);
void	ft_putptr(void *ptr, int *len);

#endif