/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:38:52 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/07 20:18:08 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H

# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>
# include <fcntl.h>

# define IO_STDIN STDIN_FILENO
# define IO_STDOUT STDOUT_FILENO
# define IO_STDERR STDERR_FILENO

# define FILE_READ 1
# define FILE_WRITE 2
# define FILE_RW 3

# define BUFF_SIZE 32
# define INPUT_OK 1
# define INPUT_END 0
# define INPUT_ERROR -1

# define PRINTF_ERROR -1
# define FT_PRINTF_SIZE 4096

# if defined (_WIN32) || defined (_WIN64)
#  define LINE_BREAK "\r\n"
# else
#  define LINE_BREAK "\n"
# endif

/*
** Input/Output Handling functions.
*/

int		ft_printf(char const *fmt, ...);
int		ft_dprintf(int fd, const char *fmt, ...);
int		ft_sprintf(char **dst, char const *fmt, ...);
int		ft_vsprintf(char **dst, char const *fmt, va_list *args);

int		ft_get_string(int fd, char **strp, char const *sep);
int		ft_get_int(int fd, int *i, char const *sep);
int		ft_get_float(int fd, float *f, char const *sep);

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);

void	ft_putstr(const char *s);
void	ft_putstr_fd(const char *s, int fd);

void	ft_putnstr(const char *str, size_t n);
void	ft_putnstr_fd(const char *str, int fd, size_t n);

void	ft_putendl(const char *s);
void	ft_putendl_fd(const char *s, int fd);

void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);

/*
** Files
*/

int		ft_open_file(const char *file, int mode);
int		ft_close_file(int fd);
int		ft_get_line_count(const char *file);

#endif
