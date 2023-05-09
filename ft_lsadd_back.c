/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsadd_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:47:28 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/09 12:06:09 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ret;

	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	ret = ft_lstlast(*lst);
	ret->next = new;
}
