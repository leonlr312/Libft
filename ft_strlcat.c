/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:00:36 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/17 10:39:22 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned char	count;
	unsigned char	len_src;
	unsigned char	len_dest;

	if (size == 0 && dest == 0)
		return (0);
	count = 0;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size > len_dest)
	{
		while (src[count] != 0 && count + len_dest < size -1)
		{
			dest[count + len_dest] = src[count];
			count++;
		}
		dest[count + len_dest] = 0;
		return (len_src + len_dest);
	}
	return (len_src + size);
}
