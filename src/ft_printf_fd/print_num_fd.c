/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_num_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 15:36:20 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/03/13 14:35:25 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <limits.h>

int	print_num(const int fd, int n)
{
	ft_putnbr_fd(fd, n);
	return (ft_intlen(n) + (n < 0));
}

int	print_unsigned(const int fd, long n)
{
	if (n < 0)
		n = UINT_MAX - -n;
	ft_putnbr_fd(fd, n);
	return (ft_intlen(n));
}
