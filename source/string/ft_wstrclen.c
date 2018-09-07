/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrclen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 17:01:48 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 17:01:53 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

size_t		ft_wstrclen(wchar_t const *str, int is_prec, size_t precision)
{
	size_t	i;
	size_t	len;
	size_t	wchar_size;

	i = 0;
	len = 0;
	while (str[i])
	{
		wchar_size = ft_wchar_size(str[i]);
		if (is_prec && (len + wchar_size) > precision)
			break ;
		len += wchar_size;
		++i;
	}
	return (len);
}
