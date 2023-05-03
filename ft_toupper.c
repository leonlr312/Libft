/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_touper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:36:12 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/03 15:54:51 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_touper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
