/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:11:12 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/02 20:23:01 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>
#include <ft/memory.h>

char					*ft_strcpy(char *dst, const char *src)
{
	char	*save;

	save = dst;
	while ((*dst++ = *src++))
		;
	return (save);
}
