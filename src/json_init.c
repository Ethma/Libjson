/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/07 13:58:11 by mabessir          #+#    #+#             */
/*   Updated: 2018/08/02 12:57:34 by mabessir         ###   ########.fr       */
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
	file = (t_json_file){
		.str = (const char *)str,
		.len = ft_strlen(str),
		.pos = 0,
		.index = 0};
	printf("1111\n");
	if ((root = new_json_value(&file, NULL)) == NULL)
		return (NULL);
	return (root);
}
