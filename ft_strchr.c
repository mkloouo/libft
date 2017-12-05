/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:05:01 by modnosum          #+#    #+#             */
/*   Updated: 2017/12/01 02:59:16 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
	{
		if (*s++ == '\0')
			return (NULL);
	}
	return ((char*)s);
}
