/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:42:37 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/19 14:51:43 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t num)
{
	char	*ptr;

	if (dest == 0 || src == 0)
		return (dest);
	ptr = dest;
	while (*src && num > 0)
	{
		*dest++ = *src++;
		num--;
	}
	while (num--)
		*dest++ = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	temp;
	size_t	size;

	if (s == 0)
		return (NULL);
	temp = ft_strlen((char *)s);
	if (start >= temp)
		return (ft_strdup(""));
	size = len;
	if (start + size > temp)
		size = temp - start;
	str = (char *)malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	ft_strncpy(str, s + start, size);
	str[size] = 0;
	return (str);
}
