/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resize_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 17:00:01 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 17:00:17 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

#include <ft/memory.h>

char		*ft_resize_str(const char *src, size_t size, size_t new_size)
{
	size_t	i;
	char	*dst;

	dst = malloc(sizeof(char) * (new_size + 1));
	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		++i;
	}
	while (i <= new_size)
		dst[i++] = 0;
	free((void*)src);
	return (dst);
}
