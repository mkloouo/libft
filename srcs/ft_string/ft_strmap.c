/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:46:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 05:16:52 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char					*ft_strmap(const char *str, char (*f)(char))
{
	char				*mapped_str;
	int					i;

	if (!str || !f)
		return (NULL);
	if ((mapped_str = ft_strnew(ft_strlen(str))))
	{
		i = 0;
		while (str[i] != '\0')
		{
			mapped_str[i] = f(str[i]);
			i++;
		}
	}
	return (mapped_str);
}
