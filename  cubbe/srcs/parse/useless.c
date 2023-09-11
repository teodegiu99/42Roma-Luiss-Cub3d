/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   useless.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-gius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:49:43 by mde-gius          #+#    #+#             */
/*   Updated: 2021/04/18 18:49:47 by mde-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/parse.h"

void	check_commas(char *color)
{
	while (*(color + 1))
	{
		if (*color == ',' && *(color + 1) == ',')
			ft_perror("Error\nInvalid Color");
		color++;
	}
	if (*color == ',')
		ft_perror("Error\nInvalid Color");
}

void	check_res(char **args)
{
	int	i;

	i = 0;
	while (args[1][i])
	{
		if (!ft_isdigit(args[1][i]))
			ft_perror("Error\nInvalid Configuration");
		i++;
	}
	i = 0;
	while (args[2][i])
	{
		if (!ft_isdigit(args[2][i]))
			ft_perror("Error\nInvalid Configuration");
		i++;
	}
}
