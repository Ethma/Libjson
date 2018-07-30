/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:41:56 by mabessir          #+#    #+#             */
/*   Updated: 2018/07/30 13:27:34 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBC_H
# define LIBC_H

#include "../../includes/json.h"

int		ft_atoi(const char *str);

int		ft_pow(int nb, int pw);

int		ft_isspace(const char c);

int		check_bool(t_json_file *file);

int		check_null(t_json_file *file);

int		ft_isdigit(int c);

int		ft_is_double(t_json_file *file);

double	ft_atof(const char *str);

void	pass_spaces(t_json_file *file);

void	*ft_free(void *ptr);

char	*ft_strdup(const char *src);

char	*ft_strndup(const char *s1, size_t n);

char	*ft_strjoin(char const *s1, char const *s2);

size_t	ft_strlen(const char *s);

char	*ft_strnew(size_t size);

void	*ft_memalloc(size_t size);
#endif
