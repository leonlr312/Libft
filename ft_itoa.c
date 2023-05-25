/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:17:08 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/23 17:45:57 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_itoa(int n)
{
	char	buffer[12];
	char	sign;
	int		index;

	if (n == 0)
		return (ft_strdup("0"));
	sign = 0;
	index = 12;
	buffer[--index] = '\0';
	if (n < 0)
	{
		buffer[--index] = (n % 10) * -1 + '0';
		n /= 10;
		n = n * -1;
		sign = '-';
	}
	while (n != 0)
	{
		buffer[--index] = (n % 10) + '0';
		n /= 10;
	}
	if (sign == '-')
		buffer[--index] = sign;
	return (ft_strdup(&buffer[index]));
}
