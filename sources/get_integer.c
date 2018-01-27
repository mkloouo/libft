/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_integer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:11:12 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/27 14:27:48 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int						get_integer(char *prompt)
{
	char				*input;
	int					number;

	number = 0;
	if ((input = get_string(prompt)))
	{
		number = ft_atoi(input);
		ft_strdel(&input);
	}
	return (number);
}
