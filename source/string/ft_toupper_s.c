/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 14:23:36 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/13 14:24:54 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

#include <ft/char.h>

char	*ft_toupper_s(char *str)
{
	size_t	i;

	if (str)
	{
		i = 0;
		while (str[i])
		{
			str[i] = (char)ft_toupper(str[i]);
			++i;
		}
	}
	return (str);
}
