/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:28:45 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/07 14:54:40 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_readline(char *str, int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	ssize_t	oct_nb;
	size_t	i;

	oct_nb = 1;
	while (oct_nb > 0)
	{
		oct_nb = read(fd, buffer, BUFFER_SIZE);
		if (oct_nb <= 0)
			return (str);
		buffer[oct_nb] = '\0';
		i = 0;
		while (buffer[i])
		{
			if (buffer[i] == '\n')
			{
				str = ft_strjoin(str, buffer);
				return (str);
			}
			i++;
		}
		str = ft_strjoin(str, buffer);
	}
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*buffer;
	size_t		i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!str)
	{
		str = malloc(BUFFER_SIZE + 1);
		if (!str)
			return (NULL);
	}
	str = ft_readline(str, fd);
	buffer = malloc(ft_size(str) + 1);
	i = 0;
	while (str[i] != '\n' && str[i])
	{
		buffer[i] = str[i];
		i++;
	}
	buffer[i] = '\0';
	str = ft_substr(str, i + 1);
	return (buffer);
}
