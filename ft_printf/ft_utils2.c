/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:23:33 by htaheri           #+#    #+#             */
/*   Updated: 2023/04/19 13:25:08 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(size_t n, int mode, int *len)
{
	if (n / 16)
		ft_puthex(n / 16, mode, len);
	if (n % 16 > 9)
	{
		if (mode == 0)
			ft_putchr(n % 16 - 10 + 'a', len);
		else if (mode == 1)
			ft_putchr(n % 16 - 10 + 'A', len);
	}
	else
		ft_putchr(n % 16 + '0', len);
}

void	ft_putnbr(int num, int *len)
{
	if (num == -2147483648)
		ft_putstr ("-2147483648", len);
	else
	{
		if (num < 0)
		{
			ft_putchr('-', len);
			num *= -1;
		}
		if (num > 9)
			ft_putnbr(num / 10, len);
		ft_putchr(num % 10 + '0', len);
	}
}

void	ft_putnbr_u(unsigned int num, int *len)
{
	if (num > 9)
		ft_putnbr_u(num / 10, len);
	ft_putchr(num % 10 + '0', len);
}

void	ft_putptr(void *ptr, int *len)
{
	size_t	p;

	p = (size_t) ptr;
	ft_putstr("0x", len);
	ft_puthex(p, 0, len);
}
