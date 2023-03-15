/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:00:11 by ayumusak          #+#    #+#             */
/*   Updated: 2023/03/15 21:24:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*len;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	len = malloc(sizeof(char) * (s1_len + ft_strlen(s2) + 1));
	if (!len)
		return (0);
	ft_strlcpy(len, s1, s1_len + 1);
	ft_strlcpy(&len[s1_len], s2, s2_len + 1);
	return (len);
}