/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_fd.h                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 17:49:45 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/03/13 15:54:56 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FD_H
# define FT_PRINTF_FD_H
# include <unistd.h>
# include <stdint.h>

int		print_char_fd(int fd, char c);
int		print_str_fd(int, char *s);
int		print_percent_fd(int fd);
int		print_hex_upper_fd(int fd, unsigned int n);
int		print_hex_lower_fd(int fd, unsigned int n);
int		print_num_fd(int fd, int n);
int		print_unsigned_fd(int fd, long n);
int		print_ptr_fd(int fd, uintptr_t ptr);

#endif
