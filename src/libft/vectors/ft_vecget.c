/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecget.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 21:05:20 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/06/17 15:03:23 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>

void	*ft_vecget(t_vector *vec, size_t index)
{
	if (index >= vec -> size)
		return (NULL);
	return (vec -> items + (index * vec -> item_size));
}
