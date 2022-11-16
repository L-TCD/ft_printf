/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <lcoissar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:58:43 by lcoissar          #+#    #+#             */
/*   Updated: 2022/11/15 06:39:30 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new_list;
	t_list	*next_new;

	if (!lst || !f || !del)
		return (NULL);
	current = lst;
	new_list = ft_lstnew(f(current->content));
	if (!new_list)
		return (NULL);
	while (current->next)
	{
		next_new = ft_lstnew(f(current->next->content));
		if (!next_new)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, next_new);
		current = current->next;
	}
	return (new_list);
}
