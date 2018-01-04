/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 01:36:39 by modnosum          #+#    #+#             */
/*   Updated: 2017/12/01 03:36:21 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrev(char *str)
{
	char	*start;
	char	*end;

	if (str)
	{
		start = str;
		end = str + ft_strlen(str) - 1;
		while (start < end)
		{
			*start = *start + *end;
			*end = *start - *end;
			*start++ -= *end--;
		}
	}
	return (str);
}
