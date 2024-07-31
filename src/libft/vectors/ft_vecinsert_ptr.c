/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecinsert_ptr.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 16:16:43 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/07/31 12:05:38 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>

int	ft_vecinsert_ptr(t_vector_ptr *vec, void *item, size_t index)
{
	if (index >= vec -> size)
		return (0);
	if (index < vec -> size - 1)
	{
		while (index < vec -> size - 1)
		{
			vec -> items[index] = vec -> items [index + 1];
			index++;
		}
		ft_vecset_ptr(vec, item, index);
		vec -> size++;
	}
	else
	{
		if (ft_vecappend_ptr(vec, item) == -1)
			return (-1);
	}
	return (0);
}
