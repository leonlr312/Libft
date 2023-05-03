/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:40:18 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/03 13:27:57 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	size_t	index;
	char	*src;

	index = 0;
	src = (char *)str;
	while (index < size)
	{
		src[index] = c;
		index++;
	}
	return (src);
}

// int	main(void)
// {
// 	char	str[] = "meu deus meu deus";

// 	ft_memset(str, 'p', 9);
// 	printf("%s\n", str);
// }
