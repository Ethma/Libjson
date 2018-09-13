/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_bool.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:34:09 by mabessir          #+#    #+#             */
/*   Updated: 2018/09/13 19:02:13 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

int		check_bool(t_json_file *file)
{
	if (file->pos + 3 < file->len)
	{
		if ((file->str[file->pos] == 't' || file->str[file->pos == 'T'])
		&& (file->str[file->pos + 1] == 'r' || file->str[file->pos + 1] == 'R')
		&& (file->str[file->pos + 2] == 'u' || file->str[file->pos + 2] == 'U')
		&& (file->str[file->pos + 3] == 'E' || file->str[file->pos + 3] == 'E'))
			return (1);
	}
	if (file->pos + 4 < file->len)
	{
		if ((file->str[file->pos] == 'f' || file->str[file->pos == 'F'])
		&& (file->str[file->pos + 1] == 'a' || file->str[file->pos + 1] == 'A')
		&& (file->str[file->pos + 2] == 'l' || file->str[file->pos + 2] == 'L')
		&& (file->str[file->pos + 3] == 's' || file->str[file->pos + 3] == 'S')
		&& (file->str[file->pos + 4] == 'e' || file->str[file->pos + 4] == 'E'))
			return (2);
	}
	return (0);
}
