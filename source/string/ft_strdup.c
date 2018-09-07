/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:08:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 16:36:50 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char		*ft_strdup(char const *src)
{
	size_t	src_len;
	char	*dup;

	src_len = ft_strlen(src);
	dup = ft_strnew(src_len, 0);
	if (dup)
		dup = ft_strncpy(dup, src, src_len);
	return (dup);
}
