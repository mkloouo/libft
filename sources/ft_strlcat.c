/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:30:42 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/24 17:24:29 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

size_t					ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t				src_len;
	size_t				dst_len;
	int					i;
	int					n;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	dst += dst_len;
	i = 0;
	if ((n = (size - dst_len)) <= 0)
		return (src_len + size);
	while (src[i] && --n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst_len + src_len);
}
