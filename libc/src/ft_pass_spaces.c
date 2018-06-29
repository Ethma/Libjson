/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pass_spaces.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 14:34:24 by mabessir          #+#    #+#             */
/*   Updated: 2018/06/28 12:33:25 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

void	pass_spaces(t_json_file *file)
{
	while (ft_isspace(file->str[file->pos] && file->pos < file->len))
		++file->pos;
}
