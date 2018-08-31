/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_new_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:50:36 by mabessir          #+#    #+#             */
/*   Updated: 2018/08/31 12:39:18 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/json.h"
#include "../includes/libc.h"

t_json_string *make_new_array(t_json_file *file)
{
	t_json_array *tab;

}

t_json_value *new_array(t_json_file *file, t_json_value *parent)
{
	t_json_array *new_array;

	if ((new_array = make_new_array(file)) == NULL)
		return (NULL);
	return (ft_fill_json_value(parent, array, new_array));
}