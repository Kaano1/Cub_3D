/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayumusak <ayumusak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:57:12 by ayumusak          #+#    #+#             */
/*   Updated: 2023/03/20 18:57:12 by ayumusak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
