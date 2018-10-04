/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:04:36 by mabessir          #+#    #+#             */
/*   Updated: 2018/10/04 11:08:10 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

char	*ft_readfile(int fd)
{
	char	*str;
	char	*strr;
	int		ret;
	char	buf[4096 + 1];
	
	if (fd <= -1)
		return (0);
	while ((ret = read(fd, buf, 4096) != -1))
	{
		buf[ret] = '\0';
		strr = ft_strnew(ret);
		ft_strcpy(strr, buf);
		str = ft_strmerge(strr, str);
	}
	if (ret == -1)
	{
		ft_strdel(&str);
		return (0);
	}
	return (str);
}