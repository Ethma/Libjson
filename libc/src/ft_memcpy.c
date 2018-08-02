/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 14:43:36 by adleau            #+#    #+#             */
/*   Updated: 2018/08/02 17:04:51 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char		*c1;
	const char	*c2;

	if (n != 0)
	{
		c1 = (char *)s1;
		c2 = (char *)s2;
		while (n > 0)
		{
			*c1 = *c2;
			c1++;
			c2++;
			n--;
		}
	}
	return (s1);
}
