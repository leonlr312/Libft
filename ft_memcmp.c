/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:00:41 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/03 16:09:15 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	count;
	char	*dest1;
	char	*dest2;

	dest1 = (char *)str1;
	dest2 = (char *)str2;
	count = 0;
	while (count < n)
	{
		if (dest1[count] != dest2[count])
			return (dest1[count] - dest2[count]);
		count++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str1[15];
// 	char	str2[15];
// 	int		ret;

// 	memcpy(str1, "abcdef", 6);
// 	memcpy(str2, "abcdef", 6);
// 	ret = ft_memcmp(str1, str2, 5);
// 	if (ret > 0)
// 	{
// 		printf("str2 is less than str1");
// 	}
// 	else if (ret < 0)
// 	{
// 		printf("str1 is less than str2");
// 	}
// 	else
// 	{
// 		printf("str1 is equal to str2");
// 	}
// 	return (0);
// }
