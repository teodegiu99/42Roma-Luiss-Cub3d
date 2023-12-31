/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-gius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:48:30 by mde-gius          #+#    #+#             */
/*   Updated: 2021/04/18 18:48:33 by mde-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/main.h"

int	main(int argc, char **argv)
{
	int		fd;
	t_parse	config;

	config.save = 0;
	if (argc == 3)
	{
		if (ft_strcmp(argv[2], "--save"))
			config.save = 1;
		else
			ft_perror("Error\nUnknown Command");
	}
	if (argc < 2)
		ft_perror("Error\nNo Config File Specified");
	if (argc > 3)
		ft_perror("Error\nToo Many Arguments");
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		ft_perror("Error\nInvalid Config File");
	parse_main(fd, &config);
	window_main(&config);
	close(fd);
	return (0);
}
