/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 13:58:11 by mabessir          #+#    #+#             */
/*   Updated: 2018/09/13 14:34:45 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/json.h"
#include "../libc/includes/libc.h"

t_json_value	*json_init(char *str)
{
	t_json_value	*root;
	t_json_file		file;

	if (str == NULL)
		return (NULL);
	file.str = (const char *) str;
	file.len = ft_strlen(str);
	file.pos = 0;
	file.index = 0;
	if ((root = new_json_value(&file, NULL)) == NULL)
		return (NULL);
	return (root);
}
