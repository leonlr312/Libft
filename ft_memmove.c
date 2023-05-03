/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:51:51 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/03 15:59:29 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*dest1;
	const char	*dest2;
	size_t		index;

	index = 0;
	dest1 = (char *)str1;
	dest2 = (char *)str2;
	if (str1 == 0 && str2 == 0)
		return (str1);
	while (index < n)
	{
		dest1[index] = dest2[index];
		index++;
	}
	return (str1);
}

// #include<stdio.h>
// int main(void)
// {
// 	char str1[] = "banana";
// 	char str2[] = "clovao";

// 	printf("%s\n", str1);
// 	ft_memmove(str1, str2, 1);
// 	printf("%s\n", str1);
// }
