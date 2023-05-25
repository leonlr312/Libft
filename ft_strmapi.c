/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:11:18 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/17 10:39:22 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	int		s_len;
	char	*temp;

	if (s == 0)
		return (NULL);
	index = 0;
	s_len = ft_strlen((char *)s);
	temp = (char *)malloc(sizeof(char) * s_len + 1);
	if (temp == 0)
		return (NULL);
	while (s[index])
	{
		temp[index] = f(index, s[index]);
		index++;
	}
	temp[index] = 0;
	return (temp);
}
