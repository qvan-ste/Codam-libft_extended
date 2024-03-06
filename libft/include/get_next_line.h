/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/18 11:49:14 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/03/06 14:34:44 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 18
# endif

char		*get_next_line(int fd);
static char	*clean_ret(char *full_ret, char **buf, int *error);
static char	*read_and_append(int fd, char *buf, char **ret);
static char	*save_buf(char *buf, int *error);

#endif
