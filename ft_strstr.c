/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:21:18 by modnosum          #+#    #+#             */
/*   Updated: 2017/12/04 06:58:10 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *haystack, const char *needle)
{
	char	*p;
	size_t	len;
	int		i;

	len = ft_strlen(needle);
	if (len == 0)
		return ((char*)haystack);
	p = (char*)haystack;
	i = 0;
	while (p[i] != 0)
	{
		if (ft_memcmp((p + i), needle, len) == 0)
			return (p + i);
		i++;
	}
	return (NULL);
}
