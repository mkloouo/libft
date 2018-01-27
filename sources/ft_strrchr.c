/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:15:02 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/27 14:27:56 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char					*ft_strrchr(const char *str, int c)
{
	size_t				i;

	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char*)str + i);
		i--;
	}
	return ((str[i] == (unsigned char)c) ? ((char*)str) : NULL);
}
