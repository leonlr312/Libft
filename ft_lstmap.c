/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:11:09 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/05/17 10:39:22 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;

	if (lst != NULL && f != NULL && del != NULL)
	{
		list = ft_lstnew(f(lst->content));
		if (list == NULL)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		list->next = ft_lstmap(lst->next, f, del);
		return (list);
	}
	return (NULL);
}
