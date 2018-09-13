/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:01:43 by mabessir          #+#    #+#             */
/*   Updated: 2018/09/13 18:58:05 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libc/includes/libc.h"
#include "../includes/json.h"

int		main(int ac, char **av)
{
	t_json_value	*value;
	t_json_string	*string;
	int				fd;
	char			*str;
	int				*a;
	char 			*strr;
//	t_bool			*nbool;

	if (ac != 2)
		return (0);
	if (av[1] == NULL)
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
	value = json_init(str);
	a = (int *)value->ptr;
//	nbool = (t_bool *)value->ptr;
//	value = (t_json_string *)value->ptr;
//	printf("%d\n", *a);
	string = 0;
	printf("ok?\n");
//	printf("%u\n", *nbool);
//	printf("%c\n", nbool);
//	printf("%s\n", null);
//	printf("type = %i\n", value->type);
//	printf("string = %s\n", string->str);
	return (0);
}
