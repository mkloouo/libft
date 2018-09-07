/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 16:19:38 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 16:20:54 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char		*ft_strfill(char *dst, size_t len, char c)
{
	char	*s;

	s = dst;
	while (len)
	{
		*dst++ = c;
		--len;
	}
	return (s);
}
