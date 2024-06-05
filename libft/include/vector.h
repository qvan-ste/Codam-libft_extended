/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   vectorft.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/05 13:08:18 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/06/05 13:27:51 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTORFT_H
# define VECTORFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_vector 
{
	void		**items;
	size_t		capacity;
	size_t		size;
} t_vector;

#endif