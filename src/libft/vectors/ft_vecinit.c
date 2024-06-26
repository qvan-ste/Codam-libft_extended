/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecinit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 13:04:37 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/06/05 21:12:42 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>

void	ft_vecinit(t_vector *vec, size_t capacity, size_t item_size)
{
	vec -> item_size = item_size;
	vec -> capacity = capacity;
	vec -> size = 0;
	vec -> items = malloc(item_size * vec -> capacity);
	if (!vec -> items)
		vec = NULL;
}
