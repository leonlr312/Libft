/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 09:47:17 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/03 14:09:43 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int				ft_isalpha(int c);
int				ft_isascii(char c);
int				ft_isalnum(char c);
int				ft_isdigit(char c);
int				ft_isprint(char c);
int				ft_isspace(char c);
int				ft_tolower(char c);
int				ft_touper(char c);
int				ft_atoi(char *str);
void			ft_bzero(void *str, size_t size);
void			*ft_calloc(size_t nitems, size_t size);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *str1, const void *str2, size_t n);
void			*ft_memset(void *str, int c, size_t size);
char			*ft_strchr(const char *str, int c);
char			*ft_strdup(char *src);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strrchr(const char *str, int c);
int				ft_strlen(char *str);

#endif
