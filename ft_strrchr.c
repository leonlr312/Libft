/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:22:19 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/03 13:50:13 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		count;
	char	*s;

	s = (char *) str;
	count = ft_strlen(s);
	while (count >= 0)
	{
		if (s[count] == c)
			return (&s[count]);
		count--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	const char	str[] = "reon";
// 	int			c = 'l';
// 	char		*ret;
// 	char		*ret2;

// 	ret = strrchr(str, c);
// 	ret2 = ft_strrchr(str, c);
// 	printf("String after |%c| is - |%s|\n", c, ret);
// 	printf("String after |%c| is - |%s|\n", c, ret2);
// 	return (0);
// }
