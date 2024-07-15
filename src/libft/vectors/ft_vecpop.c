/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecpop.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 21:15:59 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/07/15 14:02:20 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>
#include <libft.h>

void	ft_vecpop(t_vector *vec, size_t index)
{
	if (index >= vec -> size)
		return ;
	if (index != vec -> size - 1)
	{
		ft_memmove(vec -> items + index * vec -> item_size,
			vec -> items + (index + 1) * vec -> item_size,
			(vec -> size - index) * vec -> item_size);
	}
	ft_bzero(ft_vecget(vec, vec -> size - 1),
		(vec -> capacity - vec -> size) * vec -> item_size);
	vec -> size--;
}
