/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 10:38:44 by mabessir          #+#    #+#             */
/*   Updated: 2018/10/05 16:49:12 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

void	*ft_free(void *ptr)
{
	free(ptr);
	ptr = NULL;
	return (NULL);
}
