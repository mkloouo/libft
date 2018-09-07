/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:51:31 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 16:29:34 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char					*ft_strsub(const char *s, unsigned int start,
size_t len)
{
	char				*str;
	int					i;

	str = ft_strnew(len, 0);
	if (str && s)
	{
		i = 0;
		while (len > 0)
		{
			str[i] = s[start + i];
			i++;
			len--;
		}
	}
	return (str);
}
