/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 18:31:27 by modnosum          #+#    #+#             */
/*   Updated: 2017/12/04 06:34:14 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define IS_WHITESPACE(Value) (Value == ' ' || Value == '\n' || Value == '\t')

char			*ft_strtrim(const char *s)
{
	char	*start;
	char	*end;

	if (!s)
		return (NULL);
	start = (char*)s;
	while (IS_WHITESPACE(*start))
		start++;
	end = ((char*)s + ft_strlen(s) - 1);
	while (IS_WHITESPACE(*end) && (end > start))
		end--;
	return (ft_strsub(s, (start - (char*)s), (end - start + 1)));
}
