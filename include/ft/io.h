/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 17:58:45 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:40:31 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H

# include <stddef.h>

# define FILE_READ 1
# define FILE_WRITE 2
# define FILE_RW 3

# define FD_SIZE 50000
# define BUFF_SIZE 32
# define INPUT_OK 1
# define INPUT_END 0
# define INPUT_ERROR -1

# if defined (_WIN32) || defined (_WIN64)
#  define LINE_BREAK "\r\n"
# else
#  define LINE_BREAK "\n"
# endif

/*
** Input/Output Handling functions.
*/

int						ft_get_string(const int fd, char **str, char *sep);
int						ft_get_int(const int fd, int *i, char *sep);
int						ft_get_float(const int fd, float *f, char *sep);

void					ft_putchar(char c);
void					ft_putchar_fd(char c, int fd);

void					ft_putstr(const char *s);
void					ft_putstr_fd(const char *s, int fd);
void					ft_putendl(const char *s);
void					ft_putendl_fd(const char *s, int fd);

void					ft_putnbr(int n);
void					ft_putnbr_fd(int n, int fd);

/*
** Files
*/

int						ft_open_file(const char *file, int mode);
int						ft_close_file(int fd);
int						ft_get_line_count(const char *file);

#endif
