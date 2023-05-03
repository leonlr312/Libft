/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:41:58 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/03 13:27:20 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	count;
	char	*src;

	count = 0;
	src = (char *)str;
	while (count < n)
	{
		if (src[count] == c)
			return (&src[count]);
		count++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	ft_strlen(char *str)
// {
// 	int	size;

// 	size = 0;
// 	while (str[size] != '\0')
// 	{
// 		size++;
// 	}
// 	return (size);
// }

// int	main(void)
// {
// 	const char str[] = "abublepom";
// 	const char c = 't';
// 	char *ret;

// 	ret = ft_memchr(str, c, strlen(str));
// 	printf("String after |%c| is - |%s|\n", c, ret);
// 	return (0);
// }
