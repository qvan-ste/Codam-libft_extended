/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecdelete_ptr.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/17 16:48:15 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/07/29 15:43:26 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>

void	ft_vecdelete_ptr(t_vector_ptr *vec)
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (!vec)
		return ;
	while (i < vec -> capacity)
	{
		tmp = vec -> items[i];
		if (tmp)
			free(tmp);
		i++;
	}
	free (vec -> items);
}
