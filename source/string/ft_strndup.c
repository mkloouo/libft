/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 21:51:24 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/11 22:08:16 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

#include <ft/memory.h>

char		*ft_strndup(char const *src, size_t n)
{
	size_t	i;
	char	*res;

	res = malloc(n + 1);
	i = 0;
	while (i < n)
	{
		res[i] = src[i];
		++i;
	}
	res[i] = 0;
	return (res);
}
