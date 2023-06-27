/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:00:41 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/17 10:39:32 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			count;
	unsigned char	*dest1;
	unsigned char	*dest2;

	dest1 = (unsigned char *)str1;
	dest2 = (unsigned char *)str2;
	count = 0;
	while (count < n)
	{
		if (dest1[count] != dest2[count])
			return (dest1[count] - dest2[count]);
		count++;
	}
	return (0);
}
