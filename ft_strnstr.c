/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:02:03 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/03 13:32:41 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		count;
	int			counter;
	const char	*temp;
	char		*str1;
	char		*str2;

	count = 0;
	counter = 0;
	str1 = (char *)big;
	str2 = (char *)little;
	while (count < len)
	{
		if (str1[count] == str2[counter])
		{
			temp = (char *) &big[count];
			while (count < len)
			{
				count++;
				if (++counter == ft_strlen(str2))
					return ((char *)temp);
			}
		}
		count++;
	}
	return (0);
}

// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	const char	big[20] = "TutorialsPoint";

// 	printf("The substring is: %s\n", ft_strnstr(big, "t", 3)); // torialsPoint
// 	printf("The substring is: %s\n", ft_strnstr(big, "Point", 14)); // Point
// 	printf("The substring is: %s\n", ft_strnstr(big, "Point", 3)); // (null)
// 	printf("The substring is: %s\n", ft_strnstr(big, "Point", 10)); // (null)
// 	return (0);
// }
