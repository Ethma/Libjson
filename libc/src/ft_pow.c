/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 13:28:29 by mabessir          #+#    #+#             */
/*   Updated: 2018/10/04 13:41:59 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libc.h"

double	ft_pow(double nb, double pw)
{
	double	ret;

	ret = 1.0;
	while (pw > 0 && pw--)
		ret *= nb;
	while (pw < 0 && pw++)
		ret /= nb;
	return (ret);
}
