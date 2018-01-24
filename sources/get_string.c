/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 13:47:07 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/24 20:03:38 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

char					*get_string(char *prompt)
{
	char	*input;

	ft_putstr(prompt);
	get_next_line(0, &input);
	return (input);
}
