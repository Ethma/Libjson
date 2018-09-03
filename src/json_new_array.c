/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_new_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:50:36 by mabessir          #+#    #+#             */
/*   Updated: 2018/09/03 16:03:35 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/json.h"
#include "../libc/includes/libc.h"

unsigned long	get_array_size(t_json_file *file, unsigned long pos)
{
	unsigned long cou;
	unsigned long *c;

	c = (unsigned long[4]){(file->str[file->pos++] == '['), 0, 0, 0};
	while (pos < file->len && ft_isspace(file->str[pos]))
		pos++;
	cou = 1;
	if (file->str[pos] == ']')
		return (0);
	while (pos < file->len && c[0])
	{
		cou += (file->str[pos] == ',' && c[0] == 1 && !c[1] && !c[2] && !c[3]);
		c[0] += (file->str[pos] == '{') - (file->str[pos] == '}');
		c[1] += (file->str[pos] == '[') - (file->str[pos] == ']');
		if (file->str[pos] == '\"' && file->str[pos - 1] != '\\')
			c[2] ^= 1;
		if (file->str[pos] == '\'' && file->str[pos - 1] != '\\')
			c[3] ^= 1;
		pos++;
	}
	return (cou);
}


t_json_string *make_new_array(t_json_file *file)
{
	t_json_array *tab;

	
	if (tab = (t_json_array *)malloc(sizeof(t_json_array)) == NULL)
		return (NULL);
}

t_json_value *new_array(t_json_file *file, t_json_value *parent)
{
	t_json_array *new_array;

	if (file->str == NULL || file->pos >= file->len
	|| file->str[file->pos] != '[')
		return (NULL);
	if ((new_array = make_new_array(file)) == NULL)
		return (NULL);
	return (ft_fill_json_value(parent, array, new_array));
}