/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_basic_fd.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 15:32:55 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/03/06 13:53:49 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_fd.h"

int	print_char_fd(const int fd, char c)
{
	write(fd, &c, 1);
	return (1);
}

int	print_str_fd(const int fd, char *s)
{
	if (!s)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	write(fd, s, ft_strlen(s));
	return (ft_strlen(s));
}

int	print_percent_fd(const int fd)
{
	write(fd, "%", 1);
	return (1);
}
