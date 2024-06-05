/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecadd.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 13:04:32 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/06/05 16:03:26 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <vector.h>

static int	ft_vecresize(t_vector *vec, size_t new_capacity)
{
	void	**new_block;
	void	**tmp;
	
	tmp = vec -> items;
	new_block = malloc (sizeof(void *) * new_capacity);
	if (!new_block)
		return (0);
	ft_memcpy(new_block, vec -> items, vec -> size);
	vec -> capacity = new_capacity;
	free(tmp);
	return (1);
}

int	ft_vecadd(t_vector *vec, void *item)
{
	if (vec -> size == vec -> capacity)
	{
		if (ft_vecresize(vec, vec -> capacity * 2) == -1)
			return (0);
	}
	vec -> items[vec -> size++] = item; 
	return (1);
}