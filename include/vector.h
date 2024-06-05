/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 13:08:18 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/06/05 21:52:59 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_vector
{
	void		*items;
	size_t		item_size;
	size_t		capacity;
	size_t		size;
}	t_vector;

void	ft_vecinit(t_vector *vec, size_t capacity, size_t item_size);
int		ft_vecappend(t_vector *vec, void *item);
int		ft_vecresize(t_vector *vec, size_t new_capacity);
void	ft_vecset(t_vector *vec, void *item, size_t index);
void	*ft_vecget(t_vector *vec, size_t index);
void	ft_vecpop(t_vector *vec, size_t index);
int		ft_vecinsert(t_vector *vec, void *item, size_t index);

#endif