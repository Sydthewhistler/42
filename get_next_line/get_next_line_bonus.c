/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:29:43 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/07 14:53:14 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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
	static char	*strs[MAX_FD];
	char		*buffer;
	size_t		i;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= MAX_FD)
		return (NULL);
	if (!strs[fd])
	{
		strs[fd] = malloc(1);
		if (!strs[fd])
			return (NULL);
		strs[fd][0] = '\0';
	}
	strs[fd] = ft_readline(strs[fd], fd);
	buffer = malloc(ft_size(strs[fd]) + 1);
	i = 0;
	while (strs[fd][i] != '\n' && strs[fd][i])
	{
		buffer[i] = strs[fd][i];
		i++;
	}
	buffer[i] = '\0';
	strs[fd] = ft_substr(strs[fd], i + 1);
	return (buffer);
}
