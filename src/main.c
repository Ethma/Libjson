/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:01:43 by mabessir          #+#    #+#             */
/*   Updated: 2018/08/29 16:34:36 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libc/includes/libc.h"
#include "../includes/json.h"

int     main(int ac, char **av)
{
	t_json_value* file;
	int fd;
	char *str;

	if (ac != 2)
		;
	if (av[0] == NULL)
		;
	if (!(fd = open(av[1], O_RDONLY)))
		return (0);
	get_next_line(fd, &str);
/*	file = (t_json_file){
		.str = str,
		.len = ft_strlen(str),
		.pos = 0,
		.index = 0};
*/
	printf("%s\n", str);
	file = json_init(str);
	printf("ok?\n");
	printf("type = %i\n", file->type);
	printf("string = %s\n", file->ptr);
	return (0);
}