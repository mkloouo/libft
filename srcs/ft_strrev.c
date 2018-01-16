/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 01:36:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/16 06:25:12 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strrev(char *str)
{
	char				*start;
	char				*end;

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
