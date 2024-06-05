/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecresize.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 21:41:24 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/06/05 21:41:55 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>
#include <libft.h>

int	ft_vecresize(t_vector *vec, size_t new_capacity)
{
	void	*new;

	new = ft_realloc(vec, vec -> size, new_capacity);
	if (!new)
		return (0);
	vec -> capacity = new_capacity;
	vec -> items = new;
	return (1);
}
