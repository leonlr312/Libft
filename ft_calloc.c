/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 09:40:33 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/17 12:16:50 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	size_t	number;

	number = nitems * size;
	if (nitems == 0 || size == 0)
		return (malloc(0));
	if (number / nitems != size)
		return (NULL);
	ptr = malloc(number);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, number);
	return (ptr);
}
