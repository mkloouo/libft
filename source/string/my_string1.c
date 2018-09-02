/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_string1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 20:30:08 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/02 20:43:48 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#include <my_string.h>

void		my_putnstr(char *str, size_t n)
{
	write(STDOUT_FILENO, str, n);
}

void		my_strfill(char *str, size_t len, char ch)
{
	size_t	i;

	i = 0;
	while (i < len)
		str[i++] = ch;
}

void		my_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		++i;
	}
}

char		*my_resize_str(const char *src, size_t size, size_t new_size)
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
