/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 14:38:15 by mabessir          #+#    #+#             */
/*   Updated: 2018/10/15 09:56:29 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

void	*ft_memset(void *b, int c, size_t len)
{
	b += len;
	while (len--)
		*((char *)(--b)) = (unsigned char)c;
	return (b);
}
