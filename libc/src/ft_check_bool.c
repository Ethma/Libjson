/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_bool.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:34:09 by mabessir          #+#    #+#             */
/*   Updated: 2018/09/17 13:45:36 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

int		check_bool(t_json_file *file)
{
	const char *str;

	str = file->str + file->pos;
	if (!ft_strncmp(str, "TRUE", 4) || !ft_strncmp(str, "true", 4))
		return (1);
	else if (!ft_strncmp(str, "FALSE", 5) || !ft_strncmp(str, "false", 5))
		return (2);
	return (0);
}
