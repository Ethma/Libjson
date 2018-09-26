/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_new_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:50:36 by mabessir          #+#    #+#             */
/*   Updated: 2018/09/26 18:03:59 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/json.h"
#include "../libc/includes/libc.h"

unsigned long	get_array_size(t_json_file *file, unsigned long pos)
{
	unsigned long cou;
	unsigned long *c;

	c = (unsigned long[4]){(file->str[file->pos++] == '['), 0, 0, 0};
	pass_spaces(file);
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

t_json_value	*new_array(t_json_file *f, t_json_value *parent)
{
	t_json_array	*new_array;
	t_json_value	*ret;
	unsigned long	index;

	if (f->str == NULL || f->pos >= f->len
	|| f->str[f->pos] != '['
		|| (ret = ft_fill_json_value(parent, array, NULL)) == NULL)
		return (NULL);
	if ((new_array = (t_json_array *)malloc(sizeof(t_json_array))) == NULL)
		return (ft_free(ret));
	new_array->nb = get_array_size(f, f->pos + 1);
	if ((new_array->value = (t_json_value **)malloc(sizeof(t_json_value *)
	* new_array->nb)) == NULL && ft_free(ret) == NULL)
		return (NULL);
	index = 0;
	while (index < new_array->nb)
	{
		new_array->value[index++] = new_json_value(f, ret);
		pass_spaces(f);
	}
	pass_spaces(f);
	ret->ptr = (void *)new_array;
	return (ret);
}
