/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hexlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/06 14:44:17 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/03/12 19:04:31 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_hexlen(uintptr_t n)
{
	int	len;

	len = 0;
	if (!n)
		return (1);
	while (n)
	{
		n /= 16;
		len++;
	}
	return (len);
}
