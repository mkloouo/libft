/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:24:38 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/27 14:27:54 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int				count_words(char *s, char c)
{
	int					i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s != c && *s)
			s++;
	}
	return (i);
}

static int				new_word_len(char *s, char c, int cur)
{
	int					len;

	len = 0;
	while (s[cur] != c && s[cur])
	{
		cur++;
		len++;
	}
	return (len);
}

static char				*new_word(char *s, char c, int *cur)
{
	char				*word;
	int					i;

	while (s[*cur] == c)
		(*cur)++;
	word = ft_strnew(new_word_len(s, c, *cur));
	if (word)
	{
		i = 0;
		while (s[*cur] != c && s[*cur])
			word[i++] = s[(*cur)++];
	}
	return (word);
}

char					**ft_strsplit(const char *s, char c)
{
	char				**words;
	int					i;
	int					cur;
	int					words_count;

	if ((i = 0) == 0 && !s)
		return (NULL);
	words_count = count_words((char *)s, c) + 1;
	if (!(words = (char **)ft_memalloc(sizeof(char *) * words_count)))
		return (NULL);
	cur = 0;
	while (i < words_count)
	{
		words[i] = (i < words_count - 1) ? new_word((char *)s, c, &cur) : 0;
		if (i < words_count - 1)
			if (!words[i])
			{
				while (i >= 0)
					ft_strdel(&words[i--]);
				ft_memdel((void**)words);
				return (NULL);
			}
		i++;
	}
	return (words);
}
