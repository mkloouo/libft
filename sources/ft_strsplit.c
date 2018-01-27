/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 12:51:48 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/27 13:35:06 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ft.h>

static size_t			count_words(const char *s, char c)
{
	size_t				count;

	count = 0;
	if (ft_strlen(s) > 0)
		while (1)
		{
			s = ft_strchr(s, c);
			if (s)
			{
				count++;
				while (*s == c && *s)
					s++;
			}
			else
				break ;
		}
	return (count);
}

void					fill_words(char ***wp, size_t count, const char *s, char c)
{
	size_t				i;
	const char			*sub;

	if (count > 0)
	{
		i = 0;
		while (i < count)
		{
			while (*s && *s == c)
				s++;
			sub = s;
			s = ft_strchr(s, c);
			if (!((*wp)[i++] = ft_strsub(sub, 0, ((s)
												  ? (size_t)(s++ - sub)
												  : (ft_strlen(sub))))))
			{
				arrdel((void**)wp, sizeof(char*));
				break ;
			}
		}
	}
}

char					**ft_strsplit(const char *s, char c)
{
	char				**words;
	size_t				count;

	count = count_words(s, c);
	if ((words = (char**)ft_memalloc(sizeof(char*) * (count + 1))))
	{
		words[count - 1] = 0;
		fill_words(&words, count, s, c);
	}
	return (words);
}
