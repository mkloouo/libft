/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 17:01:31 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 17:01:41 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

size_t		ft_wstrlen(wchar_t const *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		++len;
	return (len);
}
