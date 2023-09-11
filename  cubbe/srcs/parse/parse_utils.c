/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-gius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:49:30 by mde-gius          #+#    #+#             */
/*   Updated: 2021/04/18 18:49:34 by mde-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/parse.h"

void	ft_perror(char *error)
{
	ft_putstr_fd(error, 2);
	exit(-1);
}

int	matrix_len(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		i++;
	}
	return (i);
}

void	free_matrix(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

int	is_map(char *line)
{
	size_t	i;

	i = 0;
	while (line[i] == ' ')
		i++;
	if (line[i] == '\n')
		return (0);
	return (1);
}

char	*ft_append(char *dst, char *src)
{
	int	i;

	i = (int)ft_strlen(dst);
	dst = (char *)ft_realloc(dst, ft_strlen(src) + ft_strlen(dst) + 2);
	dst[i] = '\n';
	ft_strcpy(&dst[i + 1], src);
	return (dst);
}
