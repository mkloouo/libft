/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_rangei.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 13:25:13 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/02 19:53:11 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/range.h>

t_rangei				get_rangei(int min, int max)
{
	t_rangei			ri;

	ri.min = min;
	ri.max = max;
	return (ri);
}
