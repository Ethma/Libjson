/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:01:43 by mabessir          #+#    #+#             */
/*   Updated: 2018/08/02 17:16:48 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libc/includes/libc.h"
#include "../includes/json.h"

int     main(int ac, char **av)
{
	t_json_file file;
	int fd;

	if (ac != 2)
		;
	fd = 0;
	file = (t_json_file){
		.str = get_next_line(fd, file.(&str));
		.len = ft_strlen(av[1]),
		.pos = 3,
		.index = 0};
	printf("%c\n", av[1][1]);
//	printf("%s\n", av[1]);
/*	if (ac != 2)
		return (0);
	if (!(fd = open(av[1], O_RDONLY)))
		return (0);
	printf("bjr\n");
	json_init("av[1]");
*/	printf("bjr2\n");
	get_json_value_type(&file);
	printf("bjr2\n");
	return (0);
}