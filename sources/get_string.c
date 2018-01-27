/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 13:47:07 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/27 14:27:45 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char					*get_string(char *prompt)
{
	char	*input;

	ft_putstr(prompt);
	get_next_line(0, &input);
	return (input);
}
