/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:08:33 by modnosum          #+#    #+#             */
/*   Updated: 2017/12/01 03:21:22 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *str)
{
	char	*dup;

	dup = ft_strnew(ft_strlen(str));
	if (dup)
		dup = ft_strcpy(dup, str);
	return (dup);
}
