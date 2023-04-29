/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaheri <htaheri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:35:34 by htaheri           #+#    #+#             */
/*   Updated: 2023/04/29 15:32:52 by htaheri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

char	*get_next_line(int fd)
{
	static char		buffer[BUFFER_SIZE];
	char			*data;
	size_t			num_bytes;

	data = (char *) malloc(sizeof(char *));
	if (!data)
		return (NULL);
	num_bytes = read(fd, buffer, BUFFER_SIZE);
	if (num_bytes == -1)
		return (NULL);
    return (buffer);
}


int main()
{
	int fd = open("example.txt", O_RDONLY);

	get_next_line(fd);
}
