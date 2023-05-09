/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:47:49 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/09 11:50:03 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		ret;
	t_list	*node;

	node = lst;
	if (node == 0)
		return (NULL);
	ret = ft_lstsize(lst) - 1;
	while (ret-- != 0)
	{
		node = node->next;
	}
	return (node);
}
