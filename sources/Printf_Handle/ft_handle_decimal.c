/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_decimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:01:22 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/06/27 09:56:22 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_handle_decimal(int nbr)
{
	size_t	number;

	number = 1;
	ft_putnbr_fd(nbr, 1);
	while (nbr >= 10 || nbr <= -10)
	{
		nbr /= 10;
		number++;
	}
	if (nbr < 0)
		return (number + 1);
	return (number);
}
