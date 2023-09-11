/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-gius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:57:51 by mde-gius          #+#    #+#             */
/*   Updated: 2021/04/18 18:57:53 by mde-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*i;

	i = *lst;
	while (i)
	{
		del(i->content);
		tmp = i->next;
		free(i);
		i = tmp;
	}
	*lst = 0;
}
