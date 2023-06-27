/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:02:03 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/17 10:39:22 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	len_little;

	count = 0;
	len_little = ft_strlen((char *)little);
	if (len_little == 0)
		return ((char *)big);
	while (count < len && big[count] != 0 && len - count >= len_little)
	{
		if (big[count] == little[0])
		{
			if (ft_strncmp((char *)big + count,
					(char *)little, len_little) == 0)
				return ((char *)big + count);
		}
		count++;
	}
	return (0);
}
