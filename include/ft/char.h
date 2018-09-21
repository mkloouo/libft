/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:38:28 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/21 15:38:36 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_H
# define CHAR_H

# include <stddef.h>
# include <wchar.h>

# define CASE_DIFF 32

int						ft_isspace(int c);
int						ft_isdigit(int c);
int						ft_isalpha(int c);
int						ft_isalnum(int c);
int						ft_isascii(int c);
int						ft_isprint(int c);
int						ft_isupper(int c);
int						ft_islower(int c);

int						ft_tolower(int c);
int						ft_toupper(int c);

size_t					ft_wcsize(wchar_t wc);

#endif
