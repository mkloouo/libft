/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 04:07:30 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/04 19:38:10 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H

/*
** Input/Output Handling functions.
*/

/*
** Defines for get_next_line
*/
# define BUFF_SIZE 32
# define FD_SIZE 50000

/*
** Reads a line (till '\n' or EOF) from given fd and writes it to *line.
** Returns: -1, 0, 1 on error, EOF or more lines to read respectively.
*/
int						get_next_line(const int fd, char **line);

void					ft_putchar(char c);
void					ft_putchar_fd(char c, int fd);

void					ft_putstr(const char *s);
void					ft_putstr_fd(const char *s, int fd);
void					ft_putendl(const char *s);
void					ft_putendl_fd(const char *s, int fd);

void					ft_putnbr(int n);
void					ft_putnbr_fd(int n, int fd);

#endif
