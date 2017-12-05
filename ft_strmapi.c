/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:51:32 by modnosum          #+#    #+#             */
/*   Updated: 2017/12/04 06:38:52 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char	*mapped_str;
	int		i;

	if (!str || !f)
		return (NULL);
	if ((mapped_str = ft_strnew(ft_strlen(str))))
	{
		i = 0;
		while (str[i] != '\0')
		{
			mapped_str[i] = f(i, str[i]);
			i++;
		}
	}
	return (mapped_str);
}
