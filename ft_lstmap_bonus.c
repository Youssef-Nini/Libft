/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynini <ynini@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:33:34 by ynini             #+#    #+#             */
/*   Updated: 2024/11/13 13:12:19 by ynini            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*contt;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		contt = f(lst->content);
		new_node = ft_lstnew(contt);
		if (!new_node)
		{
			if (!del)
				return (NULL);
			del(contt);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
