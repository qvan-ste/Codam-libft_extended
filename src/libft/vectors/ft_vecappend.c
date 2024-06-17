/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecappend.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 13:04:32 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/06/17 14:59:45 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <vector.h>

int	ft_vecappend(t_vector *vec, void *item)
{
	if (vec -> size == vec -> capacity)
	{
		if (!ft_vecresize(vec, vec -> capacity * 2))
			return (0);
	}
	ft_memcpy(vec -> items + vec -> size * vec -> item_size,
		item, vec -> item_size);
	vec -> size++;
	return (1);
}
