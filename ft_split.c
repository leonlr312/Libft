/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:42:14 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/17 10:39:22 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_count(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static char	*ft_strndup(const char *src, size_t n)
{
	unsigned int		index;
	char				*dest;

	if (src == 0)
		return (NULL);
	index = 0;
	dest = malloc(ft_strlen((char *)src) + 1);
	if (dest == 0)
		return (0);
	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	int		count;
	int		len;
	char	**tab;

	if (s == 0)
		return (NULL);
	index = 0;
	count = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_count(s, c)) + 1);
	if (tab == 0)
		return (NULL);
	while (s[index])
	{
		while (s[index] == c)
			index++;
		len = index;
		while (s[index] && s[index] != c)
			index++;
		if (index > len)
			tab[count++] = ft_strndup(s + len, index - len);
	}
	tab[count] = 0;
	return (tab);
}
