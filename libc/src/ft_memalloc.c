/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 13:26:25 by mabessir          #+#    #+#             */
/*   Updated: 2018/07/30 13:27:01 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

void	*ft_memalloc(size_t size)
{
	char	*s;
	char	*s1;

	s = (char *)malloc(sizeof(s) * size);
	if (s)
	{
		s1 = s;
		while (size > 0)
		{
			*s = 0;
			s++;
			size--;
		}
	}
	else
		return (NULL);
	return (s1);
}