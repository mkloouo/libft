/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:05:01 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/02 20:43:44 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char const	*my_strchr(char const *haystack, char needle)
{
	while (*haystack)
	{
		if (*haystack == needle)
			return (haystack);
		++haystack;
	}
	return (0);
}
