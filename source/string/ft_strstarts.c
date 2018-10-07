/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstarts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 02:50:19 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/07 02:50:48 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char const	*ft_strstarts(char const *str, char const *start)
{
	if (ft_strstr(str, start) == str)
		return (str);
	return (0);
}
