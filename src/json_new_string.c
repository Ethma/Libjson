/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_new_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:07:51 by mabessir          #+#    #+#             */
/*   Updated: 2018/06/29 14:26:32 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/json.h"

t_json_string	*make_new_string(t_json_file *file)
{
	t_json_string *str;
	unsigned long i;

	i = file->pos;
	if (file->str == NULL || file->pos >= file->len ||
	file->str[file->pos] != '"')
		return (NULL);
	while (file->str[i] != '\0' || file->str[i] != '"')
		i++;
	if ((str = (t_json_string *)malloc(sizeof(t_json_string))) == NULL)
		return (NULL);
	str->len = i - file->pos;
	if ((str->str = ft_strndup(&file->str[file->pos], str->len)) == NULL)
	{
		free(str);
		return (NULL);
	}
	file->pos += str->len + 1;
	return (str);
}

t_json_value	*new_string(t_json_file *file, t_json_value *parent)
{
	t_json_string *new_string;

	if ((new_string = make_new_string(file)) == NULL)
		return (NULL);
	return (ft_fill_json_value(parent, string, new_string));
}
