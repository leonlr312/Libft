/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 12:46:06 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/17 14:15:35 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned char	*dest1;
	unsigned char	*dest2;
	unsigned int	index;

	dest1 = (unsigned char *)s1;
	dest2 = (unsigned char *)s2;
	index = 0;
	while ((index < n) && (dest1[index] != '\0' || dest2[index] != '\0'))
	{
		if (index < n && dest1[index] != dest2[index])
		{
			return (dest1[index] - dest2[index]);
		}
		index++;
	}
	return (0);
}
