/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 18:31:27 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 19:03:11 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftstring.h>
#include <ftctype.h>

char					*ft_strtrim(const char *s)
{
	char				*start;
	char				*end;

	if (!s)
		return (NULL);
	start = (char*)s;
	while (ft_isspace(*start))
		start++;
	end = ((char*)s + ft_strlen(s) - 1);
	while (ft_isspace(*end) && (end > start))
		end--;
	return (ft_strsub(s, (start - (char*)s), (end - start + 1)));
}
