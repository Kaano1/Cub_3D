/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayumusak <ayumusak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:08:08 by ayumusak          #+#    #+#             */
/*   Updated: 2023/04/19 15:08:09 by ayumusak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_str(int fd, char *str)
{
	int		read_byte;
	char	*temp_str;

	temp_str = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!temp_str)
		return (0);
	read_byte = 1;
	while (!t_strchr(str, '\n') && read_byte != 0)
	{
		read_byte = read(fd, temp_str, BUFFER_SIZE);
		if (read_byte == -1)
		{
			free (temp_str);
			return (0);
		}
		temp_str[read_byte] = '\0';
		str = t_strjoin(str, temp_str);
	}
	free(temp_str);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (fd < 0 && BUFFER_SIZE <= 0)
		return (0);
	str = ft_get_str(fd, str);
	if (!str)
		return (0);
	line = ft_get_line(str);
	str = ft_get_new_str(str);
	return (line);
}
