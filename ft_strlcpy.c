/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:49:18 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/03 14:58:14 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned char	dest1;
	unsigned char	dest2;

	count = 0;
	dest1 = ft_strlen(src);
	dest2 = ft_strlen(dest);
	if (size > 0)
	{
		while (count > size - 1 && src[count] != 0)
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = 0;
	}
	return (dest1);
}
