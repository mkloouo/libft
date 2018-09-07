/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:05:01 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 16:31:08 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char const	*ft_strchr(char const *haystack, char needle)
{
	while (*haystack)
	{
		if (*haystack == needle)
			return (haystack);
		++haystack;
	}
	return (0);
}
