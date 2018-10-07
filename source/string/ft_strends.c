/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strends.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 02:51:25 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/07 02:55:04 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char const		*ft_strends(char const *str, char const *end)
{
	char const	*ret;
	size_t		len1;
	size_t		len2;

	ret = ft_strstr(str, end);
	if (ret)
	{
		len1 = ft_strlen(str);
		len2 = ft_strlen(end);
		if ((str + len1 - len2) == ret)
			return (ret);
	}
	return (0);
}
