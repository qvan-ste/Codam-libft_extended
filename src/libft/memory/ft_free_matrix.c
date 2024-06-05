/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_matrix.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/13 18:06:42 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/06/05 15:03:55 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free_matrix(char *matrix[])
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}
