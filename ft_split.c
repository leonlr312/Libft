/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:42:14 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/18 09:51:58 by leoda-lu         ###   ########.fr       */
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

static int	ft_move(char **words, const char *s, int len, int *j)
{
	int	i;

	words[*j] = (char *)malloc((len + 1) * sizeof(char));
	if (words == 0)
	{
		i = 0;
		while (*j > i)
		{
			free(words[i++]);
		}
		return (1);
	}
	ft_memcpy(words[*j], s, len);
	words[*j][len] = 0;
	(*j)++;
	return (0);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**words;

	words = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > k)
		{
			if (ft_move(words, s + k, i - k, &j))
				break ;
		}
	}
	words[j] = NULL;
	return (words);
}
