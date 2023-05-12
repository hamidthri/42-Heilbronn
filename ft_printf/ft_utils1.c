/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:22:40 by htaheri           #+#    #+#             */
/*   Updated: 2023/04/19 13:23:01 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchr(char c, int *len)
{
	write(1, &c, 1);
	*len += 1;
}

void	ft_putstr(char *str, int *len)
{
	int		i;

	i = 0;
	if (!str)
	{
		write (1, "(null)", 6);
		*len += 6;
	}
	else
	{
		while (str[i])
		{
			ft_putchr(str[i], len);
			i++;
		}
	}
}
