/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ_ic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 14:05:06 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/13 14:07:28 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

#include <ft/char.h>

int			ft_strequ_ic(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (ft_tolower(s1[i]) == ft_tolower(s2[i]) && s1[i])
		++i;
	return (ft_tolower(s1[i]) == ft_tolower(s2[i]));
}
