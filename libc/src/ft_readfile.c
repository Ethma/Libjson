/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:04:36 by mabessir          #+#    #+#             */
/*   Updated: 2018/10/04 13:28:46 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

char	*ft_readfile(int fd)
{
	char	*str;
	int		ret;
	char	buf[4096 + 1];
	size_t	i;
	
	if (fd <= -1)
		return (0);
	i = 0;
	str = ft_strnew(0);
	while ((ret = read(fd, buf, 1)) > 0)
	{
		buf[ret] = '\0';
		str = ft_strmerge(buf, str, ret, i);
		i += ret;
	}
	if (ret == -1)
	{
		ft_strdel(&str);
		return (0);
	}
	return (str);
}