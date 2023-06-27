/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:14:50 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/22 19:17:39 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int	numb;
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	numb = 0;
	while (str[i] == ' ' || ('\t' <= str[i] && str[i] <= '\r'))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
	i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		numb = numb * 10;
		numb = numb + (str[i] - '0');
		i++;
	}
	return (numb * sign);
}
