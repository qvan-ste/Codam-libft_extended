/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecinit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 13:04:37 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/07/29 14:38:31 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>
#include <libft.h>

int	ft_vecinit(t_vector *vec, size_t capacity, size_t item_size)
{
	vec -> item_size = item_size;
	vec -> capacity = capacity;
	vec -> size = 0;
	vec -> items = ft_calloc(vec -> capacity, item_size);
	if (!vec -> items)
		return (-1);
	return (0);
}
