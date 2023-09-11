/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-gius <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 20:07:19 by mde-gius          #+#    #+#             */
/*   Updated: 2021/04/18 20:07:23 by mde-gius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <fcntl.h>
# include "parse.h"

int		get_next_line(int fd, char **line);
int		parse_main(int fd, t_parse	*config);
void	window_main(t_parse *config);

#endif
