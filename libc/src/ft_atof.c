/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 12:27:09 by mabessir          #+#    #+#             */
/*   Updated: 2018/09/18 11:40:23 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

double	ft_atof(const char *str)
{
	double	neg;
	double	fact;
	double	res;

	res = 0.0;
	neg = 1.0;
	fact = 1.0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		neg = (*str++ == '-') ? -1 : 1;
	while (ft_isdigit(*str))
		res = res * 10.0 + (double)(*str++ - '0');
	if (*str == '.')
		while (ft_isdigit(*++str) && (fact /= 10))
			res += fact * (double)(*str++ - '0');
	if (*str == 'E' || *str == 'e')
		return (res * neg * ft_pow((double)ft_atoi(++str), 10.0));
	return (res * neg);
}
