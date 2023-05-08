/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:42:37 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/08 10:25:19 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t				index;
	char				*str;
	unsigned int		temp;

	if (s == 0)
		return (NULL);
	index = 0;
	temp = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	if (start >= temp || start - temp <= len)
		return (ft_strdup(""));
	while (index < len)
	{
		str[index] = s[start + index];
		index++;
	}
	str[index] = 0;
	return (str);
}

// #include<stdio.h>
// int main(void)
// {
// 	char s[] = "Banana";
// 	char	*ret;

// 	ret = ft_substr(s, 5, 2);
// 	printf("%s\n", ret);
// }
