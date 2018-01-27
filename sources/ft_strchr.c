/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:05:01 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/27 14:28:16 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char					*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
		if (*s++ == 0)
			return (NULL);
	return ((char*)s);
}
