/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 10:50:58 by mabessir          #+#    #+#             */
/*   Updated: 2018/10/16 13:07:06 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

void	*ft_exit_object(t_json_value *val, t_json_object *obj)
{
	json_free(val);
	json_free_object(obj);
	return (NULL);
}

void	*ft_exit_array(t_json_value *val, t_json_array *arr)
{
	json_free(val);
	json_free_array(arr);
	return (NULL);
}
