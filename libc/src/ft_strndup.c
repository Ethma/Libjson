/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 14:48:07 by adleau            #+#    #+#             */
/*   Updated: 2018/06/28 12:04:49 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

char		*ft_strndup(const char *s1, size_t n)
{
	size_t	len;
	char	*str;
	size_t	i;

	len = ft_strlen(s1);
	if (n < len)
		len = n;
	if ((str = ft_strnew(len)) == NULL)
		return (NULL);
	i = 0;
	while (i < len)
		str[i++] = *s1++;
	return (str);
}
