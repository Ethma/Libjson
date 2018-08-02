/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_new_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 14:12:59 by mabessir          #+#    #+#             */
/*   Updated: 2018/08/02 12:39:44 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/json.h"
#include "../libc/includes/libc.h"

t_json_value	*new_json_value(t_json_file *file, t_json_value *parent)
{
	t_json_value_type type;

	while (ft_isspace(file->str[file->pos]))
		file->pos++;
	type = get_json_value_type(file);
	if (type == number)
		return (init_number(file, number, parent));
	if (type == integer)
		return (init_number(file, integer, parent));
	if (type == boolean)
		return (new_boolean(file, parent));
	if (type == null && (file->pos += 4))
		return (ft_fill_json_value(parent, null, NULL));
	if (type == string)
		return (new_string(file, parent));
	return (NULL);
}
