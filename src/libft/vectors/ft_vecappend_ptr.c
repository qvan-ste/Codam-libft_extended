/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecappend_ptr.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/14 17:14:54 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/07/15 16:07:45 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>

int	ft_vecappend_ptr(t_vector_ptr *vec, void *item)
{
	if (vec -> size == vec -> capacity)
	{
		if (ft_vecresize_ptr(vec, vec -> capacity * 2) == -1)
			return (-1);
	}
	((void **)vec -> items)[vec -> size] = item;
	vec -> size++;
	return (0);
}
