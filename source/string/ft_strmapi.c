/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:51:32 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 16:29:20 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char					*ft_strmapi(const char *str, char (*f)(unsigned int,
char))
{
	char				*mapped_str;
	int					i;

	if (str && f)
		if ((mapped_str = ft_strnew(ft_strlen(str), 0)))
		{
			i = 0;
			while (str[i])
			{
				mapped_str[i] = f(i, str[i]);
				i++;
			}
			return (mapped_str);
		}
	return (NULL);
}
