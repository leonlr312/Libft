/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:11:29 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/17 19:40:53 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int		count;
	char	*s;

	count = 0;
	s = (char *)str;
	while (s[count])
	{
		if (s[count] == (unsigned char)c)
			return (&s[count]);
		count++;
	}
	if (s[count] == (unsigned char)c)
		return (&s[count]);
	return (0);
}
