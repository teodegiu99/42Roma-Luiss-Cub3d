/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-gius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:16:35 by mde-gius          #+#    #+#             */
/*   Updated: 2021/04/18 19:16:36 by mde-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*ret;

	ret = malloc(size);
	if (!ret)
		return (NULL);
	ft_memmove(ret, ptr, ft_strlen((char *)ptr));
	((char *)ret)[ft_strlen((char *)ptr)] = 0;
	ft_bzero(ptr, ft_strlen((const char *)ptr));
	free(ptr);
	ptr = NULL;
	return (ret);
}
