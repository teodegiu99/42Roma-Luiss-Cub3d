/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-gius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:59:30 by mde-gius          #+#    #+#             */
/*   Updated: 2021/04/18 18:59:31 by mde-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*c_array;

	c_array = (void *)malloc(count * size);
	if (!c_array)
		return (0);
	ft_bzero(c_array, count * size);
	return (c_array);
}
