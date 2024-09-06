/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecget_ptr.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 15:00:44 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/09/06 18:40:42 by quincy        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_vecget_ptr(t_vector_ptr *vec, size_t index)
{
	if (index >= vec -> size)
		return (NULL);
	return (((void **)vec->items)[index]);
}
