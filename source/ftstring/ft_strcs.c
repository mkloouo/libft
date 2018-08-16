/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:12:57 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:13:29 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftstring.h>

int						ft_strcs(char *str, char *s)
{
	int					count;

	count = 0;
	while ((str = ft_strstr(str, s)))
	{
		count++;
		str += ft_strlen(s);
	}
	return (count);
}
