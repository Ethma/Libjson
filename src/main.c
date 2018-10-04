/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:01:43 by mabessir          #+#    #+#             */
/*   Updated: 2018/10/04 11:07:58 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libc/includes/libc.h"
#include "../includes/json.h"

int		main(int ac, char **av)
{
	t_json_value	*value;
//	t_json_array	*array;
//	t_json_array	*array2;
//	t_json_object	*object;
//	t_json_object	*object2;
	//t_json_string	*string;
//	t_json_pair		**pair;
//	t_json_string	*string2;
	int				fd;
	char			*str;
//	double				*a;
//	int					*b;
//	t_bool			*nbool;

	if (ac != 2)
		return (0);
	if (av[1] == NULL)
		;
	if (!(fd = open(av[1], O_RDONLY)))
		return (0);
//	printf("%s\n", str);
	value = json_init(str);
//	object = (t_json_object *)value->ptr;
	//object2 = (t_json_object *)object->pair[0]->value->ptr;
//	pair = object->pair;
//	array = (t_json_array *)value->ptr;
//	array2 = (t_json_array *)array->value[3]->ptr;
//	string = (t_json_string *)object2->pair[0]->value->ptr;
//	printf("%s\n", string->str);
	ft_free(str);
	json_free(value);
//	ft_free(value);
//	ft_free(array->value[0]->ptr);
//	ft_free(array->value[0]);
//	ft_free(array->value);
//	ft_free(array2);
//	string2 = (t_json_string *)array->value[2]->ptr;
//	printf("string2 = %s\n", string2->str);
//	b = (int *)array2->value[0]->ptr;
//	a = (double *)array->value[1]->ptr;
//	printf("number = %f\n", *a);
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
