/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 17:13:51 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/24 17:15:46 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*
** Constants
*/
# define FD_SIZE 50000
# define BUFF_SIZE 32
# define GNL_ERROR -1
# define GNL_OK 1
# define GNL_END 0

/*
** Store line (char * till '\n' char) to *line
**
** Param0: fd to read from
** Param1: pointer to buffer to save line to
**
** Returns: -1, 0, 1 on error, EOF or more lines to read respectively
*/
int						get_next_line(const int fd, char **line);

#endif
