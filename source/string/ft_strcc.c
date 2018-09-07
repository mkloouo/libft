/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 00:06:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 16:39:41 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

size_t		ft_strcc(char const *str, char c)
{
	size_t	count;

	count = 0;
	while ((str = ft_strchr(str, c)))
	{
		count++;
		str++;
	}
	return (count);
}
