/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcsize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 17:29:44 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 17:30:46 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/char.h>

size_t		ft_wcsize(wchar_t wc)
{
	if (wc <= 0x7F)
		return (1);
	else if (wc <= 0x7FF)
		return (2);
	else if (wc <= 0xFFFF)
		return (3);
	else
		return (4);
}
