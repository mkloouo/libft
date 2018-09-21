/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 17:59:11 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/21 15:28:48 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char					*ft_strjoin(const char *s1, const char *s2)
{
	size_t				s1_len;
	size_t				s2_len;
	char				*str;

	if (!s1 && !s2)
		return (0);
	s1_len = s1 ? ft_strlen(s1) : 0;
	s2_len = s2 ? ft_strlen(s2) : 0;
	str = ft_strnew(s1_len + s2_len, 0);
	if (str)
	{
		ft_strncpy(str, s1, s1_len);
		ft_strncpy((str + s1_len), s2, s2_len);
	}
	return (str);
}
