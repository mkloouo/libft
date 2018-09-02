/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 00:06:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:56:56 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

int						ft_strcc(char *str, char c)
{
	int					count;

	count = 0;
	while ((str = ft_strchr(str, c)))
	{
		count++;
		str++;
	}
	return (count);
}
