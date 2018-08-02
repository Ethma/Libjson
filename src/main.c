/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:01:43 by mabessir          #+#    #+#             */
/*   Updated: 2018/08/02 18:10:30 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libc/includes/libc.h"
#include "../includes/json.h"

int     main(int ac, char **av)
{
	t_json_file file;
	int fd;
	char *str;

	if (ac != 2)
		;
	if (av[0] == NULL)
		;
	fd = 0;
	get_next_line(fd, &str);
	file = (t_json_file){
		.str = str,
		.len = ft_strlen(str),
		.pos = 0,
		.index = 0};
//	printf("%s\n", av[1]);
/*	if (ac != 2)
		return (0);
	if (!(fd = open(av[1], O_RDONLY)))
		return (0);
	printf("bjr\n");
	json_init("av[1]");
*/	printf("bjr2\n");
	get_json_value_type(&file);
	return (0);
}