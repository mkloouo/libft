/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrncpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 21:23:31 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 17:02:51 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

static void	write_more_than_one_byte(char *dst, wchar_t c,
			size_t wc_size, size_t *j)
{
	if (wc_size == 2)
	{
		dst[(*j)++] = (char)((c >> 6) + 0xC0);
		dst[(*j)++] = (char)((c & 0x3F) + 0x80);
	}
	else if (wc_size == 3)
	{
		dst[(*j)++] = (char)((c >> 12) + 0xE0);
		dst[(*j)++] = (char)(((c >> 6) & 0x3F) + 0x80);
		dst[(*j)++] = (char)((c & 0x3F) + 0x80);
	}
	else
	{
		dst[(*j)++] = (char)((c >> 18) + 0xF0);
		dst[(*j)++] = (char)(((c >> 12) & 0x3F) + 0x80);
		dst[(*j)++] = (char)(((c >> 6) & 0x3F) + 0x80);
		dst[(*j)++] = (char)((c & 0x3F) + 0x80);
	}
}

char		*ft_wstrncpy(char *dst, wchar_t const *src, size_t n)
{
	size_t	i;
	size_t	wc_size;

	i = 0;
	while (i < n)
	{
		wc_size = ft_wchar_size(*src);
		if ((n - i) < wc_size)
			break ;
		if (wc_size == 1)
			dst[i++] = (char)*src;
		else
			write_more_than_one_byte(dst, *src, wc_size, &i);
		++src;
	}
	return (dst);
}
