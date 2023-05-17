/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:22:19 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/17 18:46:52 by leoda-lu         ###   ########.fr       */
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
		if (s[count] == (unsigned char)c)
			return (&s[count]);
		count--;
	}
	return (0);
}
