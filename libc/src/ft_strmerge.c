/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:57:01 by mabessir          #+#    #+#             */
/*   Updated: 2018/10/04 11:02:10 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

char	*ft_strmerge(char *src, char *dest)
{
	char	*ret;

	ret = ft_strjoin(dest, src);
	ft_strdel(&src);
	ft_strdel(&dest);
	return (ret);
}