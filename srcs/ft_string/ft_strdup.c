/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:08:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 19:19:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char					*ft_strdup(const char *str)
{
	char				*dup;

	dup = ft_strnew(ft_strlen(str));
	if (dup)
		dup = ft_strcpy(dup, str);
	return (dup);
}
