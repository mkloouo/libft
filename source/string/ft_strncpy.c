/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:14:51 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:58:02 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>
#include <ft/memory.h>

char					*ft_strncpy(char *dst, const char *src, size_t len)
{
	char				*s;

	s = dst;
	while (len > 0 && *src != '\0')
	{
		*s++ = *src++;
		len--;
	}
	ft_bzero(s, len);
	return (dst);
}
