/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 12:34:37 by htaheri           #+#    #+#             */
/*   Updated: 2023/04/19 14:51:26 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	type_case(char c, va_list args, int	*len)
{
	if (c == 'c')
		ft_putchr(va_arg(args, int), len);
	if (c == 's')
		ft_putstr(va_arg(args, char *), len);
	if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(args, int), len);
	if (c == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), len);
	if (c == 'x')
		ft_puthex(va_arg(args, unsigned int), 0, len);
	if (c == 'X')
		ft_puthex(va_arg(args, unsigned int), 1, len);
	if (c == 'p')
		ft_putptr(va_arg(args, void *), len);
	if (c == '%')
		ft_putchr('%', len);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			len;
	int			i;

	if (!format)
		return (0);
	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
			ft_putchr(format[i++], &len);
		else if (format[i + 1])
		{
			type_case(format[++i], args, &len);
			i++;
		}
	}
	return (len);
}
