/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_get_types.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 14:12:22 by mabessir          #+#    #+#             */
/*   Updated: 2018/08/02 18:10:42 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/json.h"
#include "../libc/includes/libc.h"

t_json_value_type	get_json_value_type(t_json_file *file)
{
	if (ft_isdigit(file->str[file->pos]) || file->str[file->pos]
	== '+' || file->str[file->pos] == '-')
	{
		if (ft_is_double(file))
		{
			printf("number");
			return (number);
		}
		else
		{
			printf("integer");
			return (integer);
		}
	}
	if (file->str[file->pos] == '"')
	{
		printf("bsor");
		return (string);
	}
	if (file->str[file->pos] == '[')
	{
		printf("array");
		return (array);
	}
	if (file->str[file->pos] == '{')
	{
		printf("test\n");
		return (object);
	}
	if (check_null(file))
		return (null);
	if (check_bool(file))
		return (boolean);
	return (none);
}
