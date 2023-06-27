/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:17:08 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/06/27 09:55:24 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(size_t n, char *base)
{
	char		*str;
	size_t		base_size;
	size_t		num_size;
	size_t		num;

	num = n;
	num_size = 1;
	base_size = ft_strlen(base);
	while (n >= base_size)
	{
		n /= base_size;
		num_size++;
	}
	str = ft_calloc((num_size + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	while (num_size--)
	{
		str[num_size] = base[num % base_size];
		num /= base_size;
	}
	return (str);
}
