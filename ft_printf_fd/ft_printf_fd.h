/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_fd.h                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 17:49:45 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/03/06 14:50:34 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FD_H
# define FT_PRINTF_FD_H
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>
# include "../libft/include/libft.h"

int		print_hex_upper_fd(const int fd, unsigned int n);
int		print_hex_lower_fd(const int fd, unsigned int n);
int		print_ptr_fd(const int fd, uintptr_t ptr);
int		print_char_fd(const int fd, char c);
int		print_str_fd(const int fd, char *s);
int		print_num_fd(const int fd, int n);
int		print_unsigned_fd(const int fd, long n);
int		print_percent_fd(const int fd);
int		ft_printf_fd(const int fd, const char *format, ...);

#endif
