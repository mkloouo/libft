/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:59:11 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:56:48 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char					*ft_strjoin(const char *s1, const char *s2)
{
	char				*str;

	str = NULL;
	if (s1 && s2)
	{
		str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (str)
		{
			ft_strncpy(str, s1, ft_strlen(s1));
			ft_strncpy((str + ft_strlen(s1)), s2, ft_strlen(s2));
		}
	}
	return (str);
}
