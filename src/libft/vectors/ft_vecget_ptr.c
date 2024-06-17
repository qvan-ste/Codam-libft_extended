/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecget_ptr.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 15:00:44 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/06/17 18:42:55 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>

void	*ft_vecget_ptr(t_vector_ptr *vec, size_t index)
{
	if (index >= vec -> size)
		return (NULL);
	return (((void **)vec->items)[index]);
}
