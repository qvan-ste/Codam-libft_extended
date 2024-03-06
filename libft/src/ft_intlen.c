/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/06 14:48:19 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/03/06 14:55:13 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_intlen(long n)
{
	if (n < 0)
		n = -n;
	if (n > 9)
		return (1 + ft_intlen(n / 10));
	return (1);
}
