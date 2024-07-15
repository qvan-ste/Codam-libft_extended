/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecpop_ptr.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 16:42:58 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/07/15 14:04:10 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>
#include <libft.h>

void	ft_vecpop_ptr(t_vector_ptr *vec, size_t index)
{
	if (index >= vec -> size)
		return ;
	free(ft_vecget_ptr(vec, index));
	while (index < vec -> size - 1)
	{
		vec -> items[index] = vec -> items [index + 1];
		index++;
	}
	vec -> items[index] = NULL;
	vec -> size--;
}
