/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:51:31 by modnosum          #+#    #+#             */
/*   Updated: 2017/12/01 03:38:55 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	str = ft_strnew(len);
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