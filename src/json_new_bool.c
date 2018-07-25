/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_new_bool.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:36:22 by mabessir          #+#    #+#             */
/*   Updated: 2018/07/25 15:32:40 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/json.h"
#include "../libc/includes/libc.h"

t_json_value	*new_boolean(t_json_file *file, t_json_value *parent)
{
	void *new_bool;

	new_bool = NULL;
	if (check_bool(file) == 1 && (file->pos += 4))
		*(t_bool *)new_bool = TRUE;
	else if (check_bool(file) == 2 && (file->pos += 5))
		*(t_bool *)new_bool = FALSE;
	else
		return (new_bool);
	return (ft_fill_json_value(parent, boolean, new_boolean));
}
