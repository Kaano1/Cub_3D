/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayumusak <ayumusak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:08:02 by ayumusak          #+#    #+#             */
/*   Updated: 2023/04/19 15:08:04 by ayumusak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	t_strchr(char *str, int c)
{
	if (!str)
		return (0);
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*t_strjoin(char *str, char *temp_str)
{
	char	*arr;
	int		i;
	int		j;

	if (!str)
	{
		str = (char *)malloc(sizeof(char));
		str[0] = '\0';
	}
	if (!str || !temp_str)
		return (0);
	i = 0;
	j = 0;
	arr = (char *)malloc(sizeof(char) * ft_strlen(str) \
	+ ft_strlen(temp_str) + 1);
	while (str[j] != '\0')
		arr[i++] = str[j++];
	j = 0;
	while (temp_str[j] != '\0')
		arr[i++] = temp_str[j++];
	arr[i] = '\0';
	free(str);
	return (arr);
}

char	*ft_get_line(char *str)
{
	int		i;
	char	*line;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * i + 2);
	if (!line)
		return (0);
	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
	{	
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*ft_get_new_str(char *str)
{
	int		i;
	int		j;
	char	*new_line;

	i = 0;
	j = ft_strlen(str);
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (0);
	}
	new_line = (char *)malloc(sizeof(char) * (j - i) + 1);
	if (!new_line)
		return (0);
	j = 0;
	i++;
	while (str[i] != '\0')
		new_line[j++] = str[i++];
	new_line[j] = '\0';
	free(str);
	return (new_line);
}
