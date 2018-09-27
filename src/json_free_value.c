/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   json_free_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 16:17:57 by mabessir          #+#    #+#             */
/*   Updated: 2018/09/27 16:57:12 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/json.h"
#include "../libc/includes/libc.h"

void	*json_free_string(void **ptr)
{
	t_json_value *val;
	t_json_string *string;

	if (!(val = (t_json_value *)(*ptr)))
		return (NULL);
	if (!(string = (t_json_string *)val->ptr))
		return (NULL);
	ft_free(string->str);
	ft_free(string);
	ft_free(val);
	return (NULL);
}