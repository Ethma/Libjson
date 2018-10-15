/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabessir <mabessir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:41:56 by mabessir          #+#    #+#             */
/*   Updated: 2018/10/15 09:56:38 by mabessir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBC_H
# define LIBC_H
# include "../../includes/json.h"
# include "get_next_line.h"

int		ft_atoi(const char *str);

double	ft_pow(double nb, double pw);

double	ft_powe(double nb);

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

char	*ft_strjoini(char const *s1, char const *s2, size_t i, size_t j);

size_t	ft_strlen(const char *s);

char	*ft_strnew(size_t size);

void	*ft_memalloc(size_t size);

char	*ft_strchr(const char *s, int c);

void	*ft_memmove(void *s1, const void *s2, size_t n);

char	*ft_strsub(char const *s, unsigned int start, size_t len);

void	ft_strdel(char **as);

void	*ft_memcpy(void *s1, const void *s2, size_t n);

char	*ft_strncpy(char *s1, const char *s2, size_t n);

char	*ft_strcpy(char *dst, const char *src);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	pass_items(t_json_file *f);

char	*ft_strmerge(char *src, char *dest, size_t i, size_t j);

char	*ft_readfile(int fd, char *str);

char	*ft_strstr(const char *haystack, const char *needle);

int		ft_isalpha(int c);

void	ft_bzero(void *s, size_t n);

void	*ft_memset(void *b, int c, size_t len);
#endif
