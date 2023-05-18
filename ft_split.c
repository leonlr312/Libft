/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:42:14 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/18 10:35:26 by leoda-lu         ###   ########.fr       */
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
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	ft_move(char **str, const char *s, int len, int *count)
{
	int	i;

	str[*count] = (char *)malloc((len + 1) * sizeof(char));
	if (str == 0)
	{
		i = 0;
		while (*count > i)
		{
			free(str[i++]);
		}
		return (1);
	}
	ft_memcpy(str[*count], s, len);
	str[*count][len] = 0;
	(*count)++;
	return (0);
}

char	**ft_split(const char *s, char c)
{
	int		index;
	int		count;
	int		size;
	char	**str;

	str = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	index = 0;
	count = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		size = index;
		while (s[index] && s[index] != c)
			index++;
		if (index > size)
		{
			if (ft_move(str, s + size, index - size, &count))
				break ;
		}
	}
	str[count] = NULL;
	return (str);
}
