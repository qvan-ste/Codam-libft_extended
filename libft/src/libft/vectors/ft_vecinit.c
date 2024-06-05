/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_vecinit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 13:04:37 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/06/05 16:03:35 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>

int ft_vecinit(t_vector *vec)
{	
	vec -> capacity = 5;
	vec -> size = 0;
	vec -> items = malloc(sizeof(void *) * vec -> capacity);
	if (!vec -> items)
		return (0);
	return (1);
}
