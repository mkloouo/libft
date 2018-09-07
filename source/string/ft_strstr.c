/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:21:18 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 17:23:58 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>
#include <ft/memory.h>

char const		*ft_strstr(const char *haystack, const char *needle)
{
	char const	*p;
	size_t		len;
	int			i;

	len = ft_strlen(needle);
	if (len == 0)
		return ((char*)haystack);
	p = (char*)haystack;
	i = 0;
	while (p[i] != 0)
	{
		if (ft_strncmp((p + i), needle, len) == 0)
			return (p + i);
		i++;
	}
	return (NULL);
}
