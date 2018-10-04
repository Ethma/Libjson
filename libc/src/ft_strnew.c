/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 14:39:09 by mabessir          #+#    #+#             */
/*   Updated: 2018/10/04 15:36:00 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

char	*ft_strnew(size_t size)
{
	char *str;

	if ((str = (char *)ft_memalloc(size + 1)) == NULL)
	{
		ft_free(str);
		return (NULL);
	}
	return (str);
}
