/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:40:33 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/19 14:42:57 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	number;

	number = nmemb * size;
	if (number != 0 && number / size != nmemb)
		return (NULL);
	ptr = malloc(number);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, number);
	return (ptr);
}
