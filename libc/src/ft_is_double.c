/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 10:48:39 by mabessir          #+#    #+#             */
/*   Updated: 2018/06/28 12:33:03 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

int		ft_is_double(t_json_file *file)
{
	int pos;

	pos = file->pos;
	while (pos < file->len)
	{
		if (ft_isdigit(file->str[pos]))
			pos++;
		else if (file->str[pos] == 'e')
			return (1);
		else if (file->str[pos] == 'E')
			return (1);
		else
			return (0);
	}
	return (0);
}
