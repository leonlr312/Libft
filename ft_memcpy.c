/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:46:16 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/17 10:39:32 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*dest1;
	char	*src1;

	count = 0;
	dest1 = (char *)dest;
	src1 = (char *)src;
	if (dest == 0 && src == 0)
		return (dest);
	while (count < n)
	{
		dest1[count] = src1[count];
		count++;
	}
	return (dest);
}
