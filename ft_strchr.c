/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:11:29 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/04/24 17:50:07 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c);

char	*ft_strchr(const char *str, int c)
{
	int		count;
	char	*s;

	count = 0;
	s = (char *)str;
	while (s[count])
	{
		if (s[count] == c)
			return (&s[count]);
		count++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main (void)
// {
// 	const char	str[] = "http://www.tutorialspoint.com";
// 	const char	c = '.';
// 	char		*ret;
// 	char		*ret2;

// 	ret = strchr(str, c);
// 	ret2 = ft_strchr(str, c);
// 	printf("String after |%c| is - |%s|\n", c, ret);
// 	printf("String after |%c| is - |%s|\n", c, ret2);
// 	return (0);
// }
