/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:46:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 16:29:13 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char					*ft_strmap(const char *str, char (*f)(char))
{
	char				*mapped_str;
	int					i;

	if (str && f)
		if ((mapped_str = ft_strnew(ft_strlen(str), 0)))
		{
			i = 0;
			while (str[i])
			{
				mapped_str[i] = f(str[i]);
				i++;
			}
			return (mapped_str);
		}
	return (NULL);
}
