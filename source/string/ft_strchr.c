/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:05:01 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:56:55 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char					*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
		if (*s++ == 0)
			return (NULL);
	return ((char*)s);
}
