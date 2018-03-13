/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:08:33 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:56:51 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftstring.h>

char					*ft_strdup(const char *str)
{
	char				*dup;

	dup = ft_strnew(ft_strlen(str));
	if (dup)
		dup = ft_strcpy(dup, str);
	return (dup);
}
