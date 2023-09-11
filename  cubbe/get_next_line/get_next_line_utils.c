/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-gius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 20:06:25 by mde-gius          #+#    #+#             */
/*   Updated: 2021/04/18 20:06:28 by mde-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_realloc_gnl(void *ptr, ssize_t more_size)
{
	void	*ret;

	ret = malloc((ft_strlen(ptr) + more_size) * sizeof(char));
	if (!(ret))
		return (0);
	ret = ft_strcpy(ret, ptr);
	free(ptr);
	ptr = NULL;
	return (ret);
}
