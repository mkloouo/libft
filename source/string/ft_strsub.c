/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:51:31 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/07 17:09:07 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char		*ft_strsub(const char *s, size_t start, size_t len)
{
	char	*str;
	int		i;

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
