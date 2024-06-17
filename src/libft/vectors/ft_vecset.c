/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 13:04:41 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/06/17 15:04:45 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <vector.h>

void	ft_vecset(t_vector *vec, void *item, size_t index)
{
	if (index >= vec -> size)
		return ;
	ft_memcpy(vec -> items + index * vec -> item_size,
		item, vec -> item_size);
}
