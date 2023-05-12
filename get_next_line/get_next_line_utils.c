/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:54:55 by htaheri           #+#    #+#             */
/*   Updated: 2023/05/07 16:07:17 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (*(str + len) != '\0')
			len++;
	return (len);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	char	*s;
	int		counter;

	counter = count * size;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	s = (char *) ptr;
	if (ptr != 0)
	{
		while (counter--)
		{
		*s = 0;
		s++;
		}
	}
	return (ptr);
}

char	*ft_strjoin(char *buffer, char *temp)
{
	char		*cat;
	char		*cat_m;
	int			s1_l;
	int			s2_l;

	s1_l = ft_strlen(buffer);
	s2_l = ft_strlen(temp);
	cat = (char *) ft_calloc((s1_l + s2_l + 1), sizeof(char));
	if (!cat || !buffer || !temp)
		return (NULL);
	cat_m = cat;
	while (*buffer)
		*cat++ = *buffer++;
	while (*temp)
		*cat++ = *temp++;
	*cat = '\0';
	return (cat_m);
}

int	check(char *buffer, char *temp)
{
	if (!buffer || !*buffer)
	{
		free(temp);
		free(buffer);
		return (0);
	}
	return (1);
}

char	*ft_strchr(const char *s, int c)
{
	while (1)
	{
		if (*s == (char)c)
			return ((char *) s);
		if (*s == '\0')
			return (NULL);
		s++;
	}
}
