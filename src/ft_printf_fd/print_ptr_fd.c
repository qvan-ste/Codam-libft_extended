/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_ptr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 15:00:35 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/03/12 19:30:45 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf_fd.h"

static void	write_ptr_fd(const int fd, uintptr_t ptr)
{
	const char	*digits = "0123456789abcdef";
	const char	*prefix = "0x";
	char		c;

	if (!(ptr / 16))
		write(fd, prefix, 2);
	if (ptr > 15)
		write_ptr_fd(fd, (ptr / 16));
	c = digits[ptr % 16];
	write(fd, &c, 1);
}

int	print_ptr(const int fd, uintptr_t ptr)
{
	if (!ptr)
	{
		write(fd, "(nil)", 5);
		return (5);
	}
	write_ptr_fd(fd, ptr);
	return (ft_hexlen(ptr) + 2);
}
