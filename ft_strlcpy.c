/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:49:18 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/20 00:15:17 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	count;
	unsigned int	len1;

	count = 0;
	len1 = ft_strlen(src);
	if (size > 0)
	{
		while (count < size - 1 && src[count] != 0)
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = 0;
	}
	return (len1);
}
