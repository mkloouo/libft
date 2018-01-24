/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_integer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:11:12 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/24 17:09:31 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int						get_integer(char *prompt)
{
	char				*input;
	int					gnl_ret;
	int					number;

	input = NULL;
	number = 0;
	ft_putstr(prompt);
	if (get_next_line(0, &input) > 0)
	{
		number = ft_atoi(input);
		ft_strdel(&input);
	}
	return (number);
}
