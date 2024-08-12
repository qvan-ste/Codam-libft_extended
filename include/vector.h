/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vector.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 13:08:18 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/08/05 18:50:50 by qvan-ste      ########   odam.nl         */
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

typedef struct s_vector_ptr
{
	void		**items;
	size_t		item_size;
	size_t		capacity;
	size_t		size;
}	t_vector_ptr;

int		ft_vecinit(t_vector *vec, size_t capacity, size_t item_size);
int		ft_vecappend(t_vector *vec, void *item);
int		ft_vecresize(t_vector *vec, size_t new_capacity);
void	ft_vecset(t_vector *vec, void *item, size_t index);
void	*ft_vecget(t_vector *vec, size_t index);
void	ft_vecpop(t_vector *vec, size_t index);
int		ft_vecinsert(t_vector *vec, void *item, size_t index);
int		ft_vecinit_ptr(t_vector_ptr *vec, size_t capacity, size_t item_size);
int		ft_vecappend_ptr(t_vector_ptr *vec, void *item);
int		ft_vecresize_ptr(t_vector_ptr *vec, size_t new_capacity);
void	ft_vecset_ptr(t_vector_ptr *vec, void *item, size_t index);
void	*ft_vecget_ptr(t_vector_ptr *vec, size_t index);
void	ft_vecpop_ptr(t_vector_ptr *vec, size_t index);
int		ft_vecinsert_ptr(t_vector_ptr *vec, void *item, size_t index);
void	ft_vecdelete_ptr(t_vector_ptr *vec);

#endif