/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:12:57 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 16:59:33 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

size_t		ft_strcs(char const *str, char const *s)
{
	size_t	count;

	count = 0;
	while ((str = ft_strstr(str, s)))
	{
		count++;
		str += ft_strlen(s);
	}
	return (count);
}
