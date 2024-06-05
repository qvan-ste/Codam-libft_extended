/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecinsert.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 21:39:21 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/06/05 22:11:19 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <vector.h>

int	ft_vecinsert(t_vector *vec, void *item, size_t index)
{
	if (index > vec -> size - 1)
		return (0);
	if (index < vec -> size - 1)
	{
		ft_memmove(vec -> items + (index + 1) * vec -> item_size,
			vec -> items + index * vec -> item_size,
			(vec -> size - index) * vec -> item_size);
		ft_vecset(vec, item, index);
		vec -> size++;
	}
	else
	{
		if (!ft_vecappend(vec, item))
			return (0);
	}
	return (1);
}
