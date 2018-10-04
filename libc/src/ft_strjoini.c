/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoini.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 14:38:45 by mabessir          #+#    #+#             */
/*   Updated: 2018/10/04 13:25:21 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

char	*ft_strjoini(char const *s1, char const *s2, size_t i, size_t j)
{
	char	*str;
	char	*ret;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(str = (char*)malloc(i + j + 1)))
		return (NULL);
	ret = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (ret);
}
