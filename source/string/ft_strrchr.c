/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:15:02 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 16:24:19 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char const				*ft_strrchr(char const *str, char c)
{
	size_t				i;

	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i--;
	}
	return ((str[i] == (unsigned char)c) ? (str) : NULL);
}
