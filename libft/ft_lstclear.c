/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:27:13 by htaheri           #+#    #+#             */
/*   Updated: 2023/04/09 21:41:39 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list		*forward;

	while (!*lst || ! del)
		return ;
	while (*lst)
	{
		forward = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = forward;
	}
	*lst = NULL;
}
