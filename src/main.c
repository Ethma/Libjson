/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:01:43 by mabessir          #+#    #+#             */
/*   Updated: 2018/09/20 15:56:23 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libc/includes/libc.h"
#include "../includes/json.h"

int		main(int ac, char **av)
{
	t_json_value	*value;
	t_json_array	*array;
	t_json_string	*string;
	t_json_string	*string2;
	int				fd;
	char			*str;
	double				*a;
//	t_bool			*nbool;

	if (ac != 2)
		return (0);
	if (av[1] == NULL)
		;
	if (!(fd = open(av[1], O_RDONLY)))
		return (0);
	get_next_line(fd, &str);
/*	file = (t_json_file){
**		.str = str,
**		.len = ft_strlen(str),
**		.pos = 0,
**		.index = 0};
*/
//	printf("%s\n", str);
	value = json_init(str);
	array = (t_json_array *)value->ptr;
	string = (t_json_string *)array->value[1]->ptr;
	string2 = (t_json_string *)array->value[2]->ptr;
	printf("string = %s\n", string->str);
	printf("string2 = %s\n", string2->str);
	string2 = (t_json_string *)array->value[3]->ptr;
	printf("string2 = %s\n", string2->str);
	a = (double *)array->value[8]->ptr;
	printf("number = %f\n", *a);
//	nbool = (t_bool *)value->ptr;
//	printf("%hhu\n", *nbool);
//	value = (t_json_string *)value->ptr;
//	printf("%d\n", *a);
//	string = 0;
//	printf("%u\n", *nbool);
//	printf("%c\n", nbool);
//	printf("%s\n", null);
//	printf("type = %i\n", value->type);
//	printf("string = %s\n", string->str);
	return (0);
}
